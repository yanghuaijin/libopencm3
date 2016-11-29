/** @defgroup pwr_file PWR
 *
 * @ingroup STM32F4xx
 *
 * @brief <b>libopencm3 STM32F4xx Power Control</b>
 *
 * @version 1.0.0
 *
 * @author @htmlonly &copy; @endhtmlonly 2011 Stephen Caudle <scaudle@doceme.com>
 *
 * @date 4 March 2013
 *
 * This library supports the power control system for the
 * STM32F4 series of ARM Cortex Microcontrollers by ST Microelectronics.
 *
 * LGPL License Terms @ref lgpl_license
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2011 Stephen Caudle <scaudle@doceme.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <libopencm3/stm32/f7/pwr.h>
#include <libopencm3/stm32/f7/rcc.h>
#include <libopencm3/stm32/f7/HAL_F7.h>
#include <libopencm3/stm32/f7/memorymap.h>

#define PWR_OVERDRIVE_TIMEOUT_VALUE  1000
#define PWR_UDERDRIVE_TIMEOUT_VALUE  1000
#define PWR_BKPREG_TIMEOUT_VALUE     1000
#define PWR_VOSRDY_TIMEOUT_VALUE     1000

/**
  * @brief  Activates the Over-Drive mode.
  * @note   This mode allows the CPU and the core logic to operate at a higher frequency
  *         than the normal mode for a given voltage scaling (scale 1, scale 2 or scale 3).
  * @note   It is recommended to enter or exit Over-drive mode when the application is not running
  *         critical tasks and when the system clock source is either HSI or HSE.
  *         During the Over-drive switch activation, no peripheral clocks should be enabled.
  *         The peripheral clocks must be enabled once the Over-drive mode is activated.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_PWREx_EnableOverDrive(void)
{
  uint32_t tickstart = 0;

  __HAL_RCC_PWR_CLK_ENABLE();

  /* Enable the Over-drive to extend the clock frequency to 216 MHz */
  __HAL_PWR_OVERDRIVE_ENABLE();

  /* Get tick */
  tickstart = HAL_GetTick();

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_ODRDY))
  {
    if((HAL_GetTick() - tickstart ) > PWR_OVERDRIVE_TIMEOUT_VALUE)
    {
      return HAL_TIMEOUT;
    }
  }

  /* Enable the Over-drive switch */
  __HAL_PWR_OVERDRIVESWITCHING_ENABLE();

  /* Get tick */
  tickstart = HAL_GetTick();

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_ODSWRDY))
  {
    if((HAL_GetTick() - tickstart ) > PWR_OVERDRIVE_TIMEOUT_VALUE)
    {
      return HAL_TIMEOUT;
    }
  }
  return HAL_OK;
}
