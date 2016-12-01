/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2010 Piotr Esden-Tempski <piotr@esden.net>
 * Copyright (C) 2011 Fergus Noble <fergusnoble@gmail.com>
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

#include <libopencm3/cm3/scb.h>
#include <libopencm3/stm32/rcc.h>

uint32_t SystemCoreClock = 16000000;
const uint8_t AHBPrescTable[16] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9};
const uint8_t APBPrescTable[8] = {0, 0, 0, 0, 1, 2, 3, 4};

static void SystemInit(void);
static void SetSysClock(void);

static void pre_main(void)
{
	SystemInit();
	/* Enable access to Floating-Point coprocessor. */
	SCB_CPACR |= SCB_CPACR_FULL * (SCB_CPACR_CP10 | SCB_CPACR_CP11);
}

static void SystemInit(void)
{
  /* FPU settings ------------------------------------------------------------*/
  SCB->CPACR |= ((3UL << 10*2)|(3UL << 11*2));  /* set CP10 and CP11 Full Access */

  /* Reset the RCC clock configuration to the default reset state ------------*/
  /* Set HSION bit */
  RCC->CR |= (uint32_t)0x00000001;

  /* Reset CFGR register */
  RCC->CFGR = 0x00000000;

  /* Reset HSEON, CSSON and PLLON bits */
  RCC->CR &= (uint32_t)0xFEF6FFFF;

  /* Reset PLLCFGR register */
  RCC->PLLCFGR = 0x24003010;

  /* Reset HSEBYP bit */
  RCC->CR &= (uint32_t)0xFFFBFFFF;

  /* Disable all interrupts */
  RCC->CIR = 0x00000000;

  SetSysClock();

  /* Configure the Vector Table location add offset address ------------------*/
#ifdef VECT_TAB_SRAM
  SCB->VTOR = RAMDTCM_BASE | VECT_TAB_OFFSET; /* Vector Table Relocation in Internal SRAM */
#else
  SCB->VTOR = FLASH_MEM_INTERFACE_BASE | VECT_TAB_OFFSET; /* Vector Table Relocation in Internal FLASH */
#endif
}

static void SetSysClock(void)
{
  __IO uint32_t StartUpCounter = 0, HSEStatus = 0;

/******************************************************************************/
/*            PLL (clocked by HSE) used as System clock source                */
/******************************************************************************/

  /* SYSCLK, HCLK, PCLK2 and PCLK1 configuration -----------*/
  /* Enable HSE */
	SET_BIT(RCC->CR, RCC_CR_HSEON);
//  RCC->CR |= ((uint32_t)RCC_CR_HSEON);

  /* Wait till HSE is ready and if Time out is reached exit */
  do
  {
    HSEStatus = RCC->CR & RCC_CR_HSERDY;
    StartUpCounter++;
  } while((HSEStatus == 0) && (StartUpCounter != HSE_STARTUP_TIMEOUT));

  if ((RCC->CR & RCC_CR_HSERDY) != RESET)
  {
    HSEStatus = (uint32_t)0x01;
  }
  else
  {
    HSEStatus = (uint32_t)0x00;
  }

  if (HSEStatus == (uint32_t)0x01)
  {
	  if(((uint32_t)(RCC->CFGR & RCC_CFGR_SWS)) != RCC_SYSCLKSOURCE_STATUS_PLLCLK)
	  {
	  CLEAR_BIT(RCC->CR, RCC_CR_PLLON);
    /* Wait till PLL is ready */
    while((RCC->CR & RCC_CR_PLLRDY) == 0)
    {
    }

	RCC->PLLCFGR = ((RCC_PLLSOURCE_HSE) | (16)                   | \
                            ((432) << RCC_PLLCFGR_PLLN_SHIFT)                      | \
                            ((((RCC_PLLP_DIV2) >> 1) -1) << RCC_PLLCFGR_PLLP_SHIFT)          | \
                            ((9) << RCC_PLLCFGR_PLLQ_SHIFT)                      | \
                            ((7) << RCC_PLLCFGR_PLLR_SHIFT));
	SET_BIT(RCC->CR, RCC_CR_PLLON);
	    /* Wait till PLL is ready */
    while((RCC->CR & RCC_CR_PLLRDY) == 0)
    {
    }
}
  }
  else
  { /* If HSE fails to start-up, the application will have wrong clock
         configuration. User can add here some code to deal with this error */
  }
}
