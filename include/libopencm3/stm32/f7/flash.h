/** @defgroup flash_defines FLASH Defines
 *
 * @ingroup STM32F7xx_defines
 *
 * @brief Defined Constants and Types for the STM32F7xx FLASH Memory
 *
 * @version 1.0.0
 *
 * @author @yuneec 2016
 * kychu <ky.chu@helang.com>
 * 
 * @date 28 November 2016
 *
 * LGPL License Terms @ref lgpl_license
 */

/*
 * This file is part of the libopencm3 project.
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

#ifndef LIBOPENCM3_FLASH_H
#define LIBOPENCM3_FLASH_H

#include <libopencm3/stm32/common/flash_common_f24.h>

/* Set the FLASH Latency. */
#define FLASH_SET_LATENCY(__LATENCY__)	MODIFY_REG(FLASH_ACR, FLASH_ACR_LATENCY, (uint32_t)(__LATENCY__))
/* Get the FLASH Latency. */
#define FLASH_GET_LATENCY()				(READ_BIT((FLASH_ACR), FLASH_ACR_LATENCY))

BEGIN_DECLS

uint8_t Increase_flash_latency(uint32_t FLatency);
uint8_t Decrease_flash_latency(uint32_t FLatency);

END_DECLS

#endif

