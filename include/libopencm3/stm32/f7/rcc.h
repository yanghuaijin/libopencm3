/** @defgroup rcc_defines RCC Defines
 *
 * @brief <b>Defined Constants and Types for the STM32F7xx Reset and Clock
 * Control</b>
 *
 * @ingroup STM32F7xx_defines
 *
 * @version 1.0.0
 *
 * @author @htmlonly &copy; @endhtmlonly 2015
 * Karl Palsson <karlp@tweak.net.au>
 *
 * @date October, 2015
 *
 * LGPL License Terms @ref lgpl_license
 *  */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2015 Karl Palsson <karlp@tweak.net.au>
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

#ifndef LIBOPENCM3_RCC_H
#define LIBOPENCM3_RCC_H

#include <libopencmsis/core_cm3.h>

/* --- RCC registers ------------------------------------------------------- */

#define RCC_CR					MMIO32(RCC_BASE + 0x00)
#define RCC_PLLCFGR				MMIO32(RCC_BASE + 0x04)
#define RCC_CFGR				MMIO32(RCC_BASE + 0x08)
#define RCC_CIR					MMIO32(RCC_BASE + 0x0c)
#define RCC_AHB1RSTR				MMIO32(RCC_BASE + 0x10)
#define RCC_AHB2RSTR				MMIO32(RCC_BASE + 0x14)
#define RCC_AHB3RSTR				MMIO32(RCC_BASE + 0x18)
#define RCC_APB1RSTR				MMIO32(RCC_BASE + 0x20)
#define RCC_APB2RSTR				MMIO32(RCC_BASE + 0x24)
#define RCC_AHB1ENR				MMIO32(RCC_BASE + 0x30)
#define RCC_AHB2ENR				MMIO32(RCC_BASE + 0x34)
#define RCC_AHB3ENR				MMIO32(RCC_BASE + 0x38)
#define RCC_APB1ENR				MMIO32(RCC_BASE + 0x40)
#define RCC_APB2ENR				MMIO32(RCC_BASE + 0x44)
#define RCC_AHB1LPENR				MMIO32(RCC_BASE + 0x50)
#define RCC_AHB2LPENR				MMIO32(RCC_BASE + 0x54)
#define RCC_AHB3LPENR				MMIO32(RCC_BASE + 0x58)
#define RCC_APB1LPENR				MMIO32(RCC_BASE + 0x60)
#define RCC_APB2LPENR				MMIO32(RCC_BASE + 0x64)
#define RCC_BDCR				MMIO32(RCC_BASE + 0x70)
#define RCC_CSR					MMIO32(RCC_BASE + 0x74)
#define RCC_SSCGR				MMIO32(RCC_BASE + 0x80)
#define RCC_PLLI2SCFGR				MMIO32(RCC_BASE + 0x84)
#define RCC_PLLSAICFGR				MMIO32(RCC_BASE + 0x88)
#define RCC_DCKCFGR1				MMIO32(RCC_BASE + 0x8C)
#define RCC_DCKCFGR2				MMIO32(RCC_BASE + 0x90)

/********************  Bit definition for RCC_CR register  ********************/
#define RCC_CR_HSICAL_MASK			0xff
#define RCC_CR_HSICAL_SHIFT			8
#define RCC_CR_HSITRIM_MASK			0x1f
#define RCC_CR_HSITRIM_SHIFT			3

#define  RCC_CR_HSION                        0x00000001U
#define  RCC_CR_HSIRDY                       0x00000002U
#define  RCC_CR_HSITRIM                      0x000000F8U
#define  RCC_CR_HSITRIM_0                    0x00000008U /*!<Bit 0 */
#define  RCC_CR_HSITRIM_1                    0x00000010U /*!<Bit 1 */
#define  RCC_CR_HSITRIM_2                    0x00000020U /*!<Bit 2 */
#define  RCC_CR_HSITRIM_3                    0x00000040U /*!<Bit 3 */
#define  RCC_CR_HSITRIM_4                    0x00000080U /*!<Bit 4 */
#define  RCC_CR_HSICAL                       0x0000FF00U
#define  RCC_CR_HSICAL_0                     0x00000100U /*!<Bit 0 */
#define  RCC_CR_HSICAL_1                     0x00000200U /*!<Bit 1 */
#define  RCC_CR_HSICAL_2                     0x00000400U /*!<Bit 2 */
#define  RCC_CR_HSICAL_3                     0x00000800U /*!<Bit 3 */
#define  RCC_CR_HSICAL_4                     0x00001000U /*!<Bit 4 */
#define  RCC_CR_HSICAL_5                     0x00002000U /*!<Bit 5 */
#define  RCC_CR_HSICAL_6                     0x00004000U /*!<Bit 6 */
#define  RCC_CR_HSICAL_7                     0x00008000U /*!<Bit 7 */
#define  RCC_CR_HSEON                        0x00010000U
#define  RCC_CR_HSERDY                       0x00020000U
#define  RCC_CR_HSEBYP                       0x00040000U
#define  RCC_CR_CSSON                        0x00080000U
#define  RCC_CR_PLLON                        0x01000000U
#define  RCC_CR_PLLRDY                       0x02000000U
#define  RCC_CR_PLLI2SON                     0x04000000U
#define  RCC_CR_PLLI2SRDY                    0x08000000U
#define  RCC_CR_PLLSAION                     0x10000000U
#define  RCC_CR_PLLSAIRDY                    0x20000000U

/********************  Bit definition for RCC_PLLCFGR register  ***************/
#define RCC_PLLCFGR_PLLR_SHIFT			28
#define RCC_PLLCFGR_PLLQ_SHIFT			24
#define RCC_PLLCFGR_PLLP_SHIFT			16
#define RCC_PLLCFGR_PLLN_SHIFT			6
#define RCC_PLLCFGR_PLLM_SHIFT			0

#define  RCC_PLLCFGR_PLLM                    0x0000003FU
#define  RCC_PLLCFGR_PLLM_0                  0x00000001U
#define  RCC_PLLCFGR_PLLM_1                  0x00000002U
#define  RCC_PLLCFGR_PLLM_2                  0x00000004U
#define  RCC_PLLCFGR_PLLM_3                  0x00000008U
#define  RCC_PLLCFGR_PLLM_4                  0x00000010U
#define  RCC_PLLCFGR_PLLM_5                  0x00000020U
#define  RCC_PLLCFGR_PLLN                    0x00007FC0U
#define  RCC_PLLCFGR_PLLN_0                  0x00000040U
#define  RCC_PLLCFGR_PLLN_1                  0x00000080U
#define  RCC_PLLCFGR_PLLN_2                  0x00000100U
#define  RCC_PLLCFGR_PLLN_3                  0x00000200U
#define  RCC_PLLCFGR_PLLN_4                  0x00000400U
#define  RCC_PLLCFGR_PLLN_5                  0x00000800U
#define  RCC_PLLCFGR_PLLN_6                  0x00001000U
#define  RCC_PLLCFGR_PLLN_7                  0x00002000U
#define  RCC_PLLCFGR_PLLN_8                  0x00004000U
#define  RCC_PLLCFGR_PLLP                    0x00030000U
#define  RCC_PLLCFGR_PLLP_0                  0x00010000U
#define  RCC_PLLCFGR_PLLP_1                  0x00020000U
#define  RCC_PLLCFGR_PLLSRC                  0x00400000U
#define  RCC_PLLCFGR_PLLSRC_HSE              0x00400000U
#define  RCC_PLLCFGR_PLLSRC_HSI              0x00000000U
#define  RCC_PLLCFGR_PLLQ                    0x0F000000U
#define  RCC_PLLCFGR_PLLQ_0                  0x01000000U
#define  RCC_PLLCFGR_PLLQ_1                  0x02000000U
#define  RCC_PLLCFGR_PLLQ_2                  0x04000000U
#define  RCC_PLLCFGR_PLLQ_3                  0x08000000U

#define  RCC_PLLCFGR_PLLR                    0x70000000U
#define  RCC_PLLCFGR_PLLR_0                  0x10000000U
#define  RCC_PLLCFGR_PLLR_1                  0x20000000U
#define  RCC_PLLCFGR_PLLR_2                  0x40000000U

/********************  Bit definition for RCC_CFGR register  ******************/
#define RCC_CFGR_MCO2_SHIFT			30
#define RCC_CFGR_MCO2PRE_SHIFT			27
#define RCC_CFGR_MCO1PRE_SHIFT			24
#define RCC_CFGR_MCO1_SHIFT			21
#define RCC_CFGR_MCO_SHIFT			RCC_CFGR_MCO1_SHIFT
#define RCC_CFGR_RTCPRE_SHIFT			16
#define RCC_CFGR_PPRE2_SHIFT			13
#define RCC_CFGR_PPRE1_SHIFT			10
#define RCC_CFGR_HPRE_SHIFT			4
#define RCC_CFGR_SWS_SHIFT			2
#define RCC_CFGR_SW_SHIFT			0

/*!< SW configuration */
#define  RCC_CFGR_SW                         0x00000003U        /*!< SW[1:0] bits (System clock Switch) */
#define  RCC_CFGR_SW_0                       0x00000001U        /*!< Bit 0 */
#define  RCC_CFGR_SW_1                       0x00000002U        /*!< Bit 1 */
#define  RCC_CFGR_SW_HSI                     0x00000000U        /*!< HSI selected as system clock */
#define  RCC_CFGR_SW_HSE                     0x00000001U        /*!< HSE selected as system clock */
#define  RCC_CFGR_SW_PLL                     0x00000002U        /*!< PLL selected as system clock */

/*!< SWS configuration */
#define  RCC_CFGR_SWS                        0x0000000CU        /*!< SWS[1:0] bits (System Clock Switch Status) */
#define  RCC_CFGR_SWS_0                      0x00000004U        /*!< Bit 0 */
#define  RCC_CFGR_SWS_1                      0x00000008U        /*!< Bit 1 */
#define  RCC_CFGR_SWS_HSI                    0x00000000U        /*!< HSI oscillator used as system clock */
#define  RCC_CFGR_SWS_HSE                    0x00000004U        /*!< HSE oscillator used as system clock */
#define  RCC_CFGR_SWS_PLL                    0x00000008U        /*!< PLL used as system clock */

/*!< HPRE configuration */
#define  RCC_CFGR_HPRE                       0x000000F0U        /*!< HPRE[3:0] bits (AHB prescaler) */
#define  RCC_CFGR_HPRE_0                     0x00000010U        /*!< Bit 0 */
#define  RCC_CFGR_HPRE_1                     0x00000020U        /*!< Bit 1 */
#define  RCC_CFGR_HPRE_2                     0x00000040U        /*!< Bit 2 */
#define  RCC_CFGR_HPRE_3                     0x00000080U        /*!< Bit 3 */

#define  RCC_CFGR_HPRE_DIV1                  0x00000000U        /*!< SYSCLK not divided */
#define  RCC_CFGR_HPRE_DIV2                  0x00000080U        /*!< SYSCLK divided by 2 */
#define  RCC_CFGR_HPRE_DIV4                  0x00000090U        /*!< SYSCLK divided by 4 */
#define  RCC_CFGR_HPRE_DIV8                  0x000000A0U        /*!< SYSCLK divided by 8 */
#define  RCC_CFGR_HPRE_DIV16                 0x000000B0U        /*!< SYSCLK divided by 16 */
#define  RCC_CFGR_HPRE_DIV64                 0x000000C0U        /*!< SYSCLK divided by 64 */
#define  RCC_CFGR_HPRE_DIV128                0x000000D0U        /*!< SYSCLK divided by 128 */
#define  RCC_CFGR_HPRE_DIV256                0x000000E0U        /*!< SYSCLK divided by 256 */
#define  RCC_CFGR_HPRE_DIV512                0x000000F0U        /*!< SYSCLK divided by 512 */

/*!< PPRE1 configuration */
#define  RCC_CFGR_PPRE1                      0x00001C00U        /*!< PRE1[2:0] bits (APB1 prescaler) */
#define  RCC_CFGR_PPRE1_0                    0x00000400U        /*!< Bit 0 */
#define  RCC_CFGR_PPRE1_1                    0x00000800U        /*!< Bit 1 */
#define  RCC_CFGR_PPRE1_2                    0x00001000U        /*!< Bit 2 */

#define  RCC_CFGR_PPRE1_DIV1                 0x00000000U        /*!< HCLK not divided */
#define  RCC_CFGR_PPRE1_DIV2                 0x00001000U        /*!< HCLK divided by 2 */
#define  RCC_CFGR_PPRE1_DIV4                 0x00001400U        /*!< HCLK divided by 4 */
#define  RCC_CFGR_PPRE1_DIV8                 0x00001800U        /*!< HCLK divided by 8 */
#define  RCC_CFGR_PPRE1_DIV16                0x00001C00U        /*!< HCLK divided by 16 */

/*!< PPRE2 configuration */
#define  RCC_CFGR_PPRE2                      0x0000E000U        /*!< PRE2[2:0] bits (APB2 prescaler) */
#define  RCC_CFGR_PPRE2_0                    0x00002000U        /*!< Bit 0 */
#define  RCC_CFGR_PPRE2_1                    0x00004000U        /*!< Bit 1 */
#define  RCC_CFGR_PPRE2_2                    0x00008000U        /*!< Bit 2 */

#define  RCC_CFGR_PPRE2_DIV1                 0x00000000U        /*!< HCLK not divided */
#define  RCC_CFGR_PPRE2_DIV2                 0x00008000U        /*!< HCLK divided by 2 */
#define  RCC_CFGR_PPRE2_DIV4                 0x0000A000U        /*!< HCLK divided by 4 */
#define  RCC_CFGR_PPRE2_DIV8                 0x0000C000U        /*!< HCLK divided by 8 */
#define  RCC_CFGR_PPRE2_DIV16                0x0000E000U        /*!< HCLK divided by 16 */

/*!< RTCPRE configuration */
#define  RCC_CFGR_RTCPRE                     0x001F0000U
#define  RCC_CFGR_RTCPRE_0                   0x00010000U
#define  RCC_CFGR_RTCPRE_1                   0x00020000U
#define  RCC_CFGR_RTCPRE_2                   0x00040000U
#define  RCC_CFGR_RTCPRE_3                   0x00080000U
#define  RCC_CFGR_RTCPRE_4                   0x00100000U

/*!< MCO1 configuration */
#define  RCC_CFGR_MCO1                       0x00600000U
#define  RCC_CFGR_MCO1_0                     0x00200000U
#define  RCC_CFGR_MCO1_1                     0x00400000U

#define  RCC_CFGR_I2SSRC                     0x00800000U

#define  RCC_CFGR_MCO1PRE                    0x07000000U
#define  RCC_CFGR_MCO1PRE_0                  0x01000000U
#define  RCC_CFGR_MCO1PRE_1                  0x02000000U
#define  RCC_CFGR_MCO1PRE_2                  0x04000000U

#define  RCC_CFGR_MCO2PRE                    0x38000000U
#define  RCC_CFGR_MCO2PRE_0                  0x08000000U
#define  RCC_CFGR_MCO2PRE_1                  0x10000000U
#define  RCC_CFGR_MCO2PRE_2                  0x20000000U

#define  RCC_CFGR_MCO2                       0xC0000000U
#define  RCC_CFGR_MCO2_0                     0x40000000U
#define  RCC_CFGR_MCO2_1                     0x80000000U

/* --- RCC_CIR values ------------------------------------------------------ */

/* Clock security system interrupt clear bit */
#define RCC_CIR_CSSC				(1 << 23)

/* OSC ready interrupt clear bits */
#define RCC_CIR_PLLSAIRDYC			(1 << 22)
#define RCC_CIR_PLLI2SRDYC			(1 << 21)
#define RCC_CIR_PLLRDYC				(1 << 20)
#define RCC_CIR_HSERDYC				(1 << 19)
#define RCC_CIR_HSIRDYC				(1 << 18)
#define RCC_CIR_LSERDYC				(1 << 17)
#define RCC_CIR_LSIRDYC				(1 << 16)

/* OSC ready interrupt enable bits */
#define RCC_CIR_PLLSAIRDYIE			(1 << 14)
#define RCC_CIR_PLLI2SRDYIE			(1 << 13)
#define RCC_CIR_PLLRDYIE			(1 << 12)
#define RCC_CIR_HSERDYIE			(1 << 11)
#define RCC_CIR_HSIRDYIE			(1 << 10)
#define RCC_CIR_LSERDYIE			(1 << 9)
#define RCC_CIR_LSIRDYIE			(1 << 8)

/* Clock security system interrupt flag bit */
#define RCC_CIR_CSSF				(1 << 7)

/* OSC ready interrupt flag bits */
#define RCC_CIR_PLLSAIRDYF			(1 << 6)
#define RCC_CIR_PLLI2SRDYF			(1 << 5)
#define RCC_CIR_PLLRDYF				(1 << 4)
#define RCC_CIR_HSERDYF				(1 << 3)
#define RCC_CIR_HSIRDYF				(1 << 2)
#define RCC_CIR_LSERDYF				(1 << 1)
#define RCC_CIR_LSIRDYF				(1 << 0)

/* --- RCC_AHB1RSTR values ------------------------------------------------- */

#define RCC_AHB1RSTR_OTGHSRST			(1 << 29)
#define RCC_AHB1RSTR_ETHMACRST			(1 << 25)
#define RCC_AHB1RSTR_DMA2DRST			(1 << 23)
#define RCC_AHB1RSTR_DMA2RST			(1 << 22)
#define RCC_AHB1RSTR_DMA1RST			(1 << 21)
#define RCC_AHB1RSTR_CRCRST			(1 << 12)
#define RCC_AHB1RSTR_GPIOKRST			(1 << 10)
#define RCC_AHB1RSTR_GPIOJRST			(1 << 9)
#define RCC_AHB1RSTR_GPIOIRST			(1 << 8)
#define RCC_AHB1RSTR_GPIOHRST			(1 << 7)
#define RCC_AHB1RSTR_GPIOGRST			(1 << 6)
#define RCC_AHB1RSTR_GPIOFRST			(1 << 5)
#define RCC_AHB1RSTR_GPIOERST			(1 << 4)
#define RCC_AHB1RSTR_GPIODRST			(1 << 3)
#define RCC_AHB1RSTR_GPIOCRST			(1 << 2)
#define RCC_AHB1RSTR_GPIOBRST			(1 << 1)
#define RCC_AHB1RSTR_GPIOARST			(1 << 0)

/* --- RCC_AHB2RSTR values ------------------------------------------------- */

#define RCC_AHB2RSTR_OTGFSRST			(1 << 7)
#define RCC_AHB2RSTR_RNGRST			(1 << 6)
#define RCC_AHB2RSTR_HASHRST			(1 << 5)
#define RCC_AHB2RSTR_CRYPRST			(1 << 4)
#define RCC_AHB2RSTR_DCMIRST			(1 << 0)

/* --- RCC_AHB3RSTR values ------------------------------------------------- */

#define RCC_AHB3RSTR_QSPIRST			(1 << 1)
#define RCC_AHB3RSTR_FSMCRST			(1 << 0)

/* --- RCC_APB1RSTR values ------------------------------------------------- */

#define RCC_APB1RSTR_UART8RST			(1 << 31)
#define RCC_APB1RSTR_UART7RST			(1 << 30)
#define RCC_APB1RSTR_DACRST			(1 << 29)
#define RCC_APB1RSTR_PWRRST			(1 << 28)
#define RCC_APB1RSTR_CECRST			(1 << 27)
#define RCC_APB1RSTR_CAN2RST			(1 << 26)
#define RCC_APB1RSTR_CAN1RST			(1 << 25)
#define RCC_APB1RSTR_I2C4RST			(1 << 24)
#define RCC_APB1RSTR_I2C3RST			(1 << 23)
#define RCC_APB1RSTR_I2C2RST			(1 << 22)
#define RCC_APB1RSTR_I2C1RST			(1 << 21)
#define RCC_APB1RSTR_UART5RST			(1 << 20)
#define RCC_APB1RSTR_UART4RST			(1 << 19)
#define RCC_APB1RSTR_UART3RST			(1 << 18)
#define RCC_APB1RSTR_UART2RST			(1 << 17)
#define RCC_APB1RSTR_SPDIFRXRST			(1 << 16)
#define RCC_APB1RSTR_SPI3RST			(1 << 15)
#define RCC_APB1RSTR_SPI2RST			(1 << 14)
#define RCC_APB1RSTR_CAN3RST			(1 << 13)
#define RCC_APB1RSTR_WWDGRST			(1 << 11)
#define RCC_APB1RSTR_LPTIM1RST			(1 << 9)
#define RCC_APB1RSTR_TIM14RST			(1 << 8)
#define RCC_APB1RSTR_TIM13RST			(1 << 7)
#define RCC_APB1RSTR_TIM12RST			(1 << 6)
#define RCC_APB1RSTR_TIM7RST			(1 << 5)
#define RCC_APB1RSTR_TIM6RST			(1 << 4)
#define RCC_APB1RSTR_TIM5RST			(1 << 3)
#define RCC_APB1RSTR_TIM4RST			(1 << 2)
#define RCC_APB1RSTR_TIM3RST			(1 << 1)
#define RCC_APB1RSTR_TIM2RST			(1 << 0)

/* --- RCC_APB2RSTR values ------------------------------------------------- */

#define RCC_APB2RSTR_MDIORST			(1 << 30)
#define RCC_APB2RSTR_DFSDM1RST			(1 << 29)
#define RCC_APB2RSTR_DSIRST				(1 << 27)
#define RCC_APB2RSTR_LTDCRST			(1 << 26)
#define RCC_APB2RSTR_SAI2RST			(1 << 23)
#define RCC_APB2RSTR_SAI1RST			(1 << 22)
#define RCC_APB2RSTR_SPI6RST			(1 << 21)
#define RCC_APB2RSTR_SPI5RST			(1 << 20)
#define RCC_APB2RSTR_TIM11RST			(1 << 18)
#define RCC_APB2RSTR_TIM10RST			(1 << 17)
#define RCC_APB2RSTR_TIM9RST			(1 << 16)
#define RCC_APB2RSTR_SYSCFGRST			(1 << 14)
#define RCC_APB2RSTR_SPI4RST			(1 << 13)
#define RCC_APB2RSTR_SPI1RST			(1 << 12)
#define RCC_APB2RSTR_SDMMC1RST			(1 << 11)
#define RCC_APB2RSTR_ADCRST				(1 << 8)
#define RCC_APB2RSTR_SDMMC2RST			(1 << 7)
#define RCC_APB2RSTR_USART6RST			(1 << 5)
#define RCC_APB2RSTR_USART1RST			(1 << 4)
#define RCC_APB2RSTR_TIM8RST			(1 << 1)
#define RCC_APB2RSTR_TIM1RST			(1 << 0)

/* --- RCC_AHB1ENR values ------------------------------------------------- */

#define RCC_AHB1ENR_OTGHSULPIEN			(1 << 30)
#define RCC_AHB1ENR_OTGHSEN				(1 << 29)
#define RCC_AHB1ENR_ETHMACPTPEN			(1 << 28)
#define RCC_AHB1ENR_ETHMACRXEN			(1 << 27)
#define RCC_AHB1ENR_ETHMACTXEN			(1 << 26)
#define RCC_AHB1ENR_ETHMACEN			(1 << 25)
#define RCC_AHB1ENR_DMA2DEN				(1 << 23)
#define RCC_AHB1ENR_DMA2EN				(1 << 22)
#define RCC_AHB1ENR_DMA1EN				(1 << 21)
#define RCC_AHB1ENR_DTCMRAMEN			(1 << 20)
#define RCC_AHB1ENR_BKPSRAMEN			(1 << 18)
#define RCC_AHB1ENR_CRCEN				(1 << 12)
#define RCC_AHB1ENR_GPIOKEN				(1 << 10)
#define RCC_AHB1ENR_GPIOJEN				(1 << 9)
#define RCC_AHB1ENR_GPIOIEN				(1 << 8)
#define RCC_AHB1ENR_GPIOHEN				(1 << 7)
#define RCC_AHB1ENR_GPIOGEN				(1 << 6)
#define RCC_AHB1ENR_GPIOFEN				(1 << 5)
#define RCC_AHB1ENR_GPIOEEN				(1 << 4)
#define RCC_AHB1ENR_GPIODEN				(1 << 3)
#define RCC_AHB1ENR_GPIOCEN				(1 << 2)
#define RCC_AHB1ENR_GPIOBEN				(1 << 1)
#define RCC_AHB1ENR_GPIOAEN				(1 << 0)

/* --- RCC_AHB2ENR values ------------------------------------------------- */

#define RCC_AHB2ENR_OTGFSEN			(1 << 7)
#define RCC_AHB2ENR_RNGEN			(1 << 6)
#define RCC_AHB2ENR_HASHEN			(1 << 5)
#define RCC_AHB2ENR_CRYPEN			(1 << 4)
#define RCC_AHB2ENR_JPEGEN			(1 << 1)
#define RCC_AHB2ENR_DCMIEN			(1 << 0)

/* --- RCC_AHB3ENR values ------------------------------------------------- */

#define RCC_AHB3ENR_QSPIEN			(1 << 1)
#define RCC_AHB3ENR_FMCEN			(1 << 0)

/* --- RCC_APB1ENR values ------------------------------------------------- */

#define RCC_APB1ENR_UART8EN			(1 << 31)
#define RCC_APB1ENR_UART7EN			(1 << 30)
#define RCC_APB1ENR_DACEN			(1 << 29)
#define RCC_APB1ENR_PWREN			(1 << 28)
#define RCC_APB1ENR_CECEN			(1 << 27)
#define RCC_APB1ENR_CAN2EN			(1 << 26)
#define RCC_APB1ENR_CAN1EN			(1 << 25)
#define RCC_APB1ENR_I2C4EN			(1 << 24)
#define RCC_APB1ENR_I2C3EN			(1 << 23)
#define RCC_APB1ENR_I2C2EN			(1 << 22)
#define RCC_APB1ENR_I2C1EN			(1 << 21)
#define RCC_APB1ENR_UART5EN			(1 << 20)
#define RCC_APB1ENR_UART4EN			(1 << 19)
#define RCC_APB1ENR_USART3EN		(1 << 18)
#define RCC_APB1ENR_USART2EN		(1 << 17)
#define RCC_APB1ENR_SPIDIFRXEN		(1 << 16)
#define RCC_APB1ENR_SPI3EN			(1 << 15)
#define RCC_APB1ENR_SPI2EN			(1 << 14)
#define RCC_APB1ENR_CAN3EN			(1 << 13)
#define RCC_APB1ENR_WWDGEN			(1 << 11)
#define RCC_APB1ENR_RTCAPBEN		(1 << 10)
#define RCC_APB1ENR_LPTIM1EN		(1 << 9)
#define RCC_APB1ENR_TIM14EN			(1 << 8)
#define RCC_APB1ENR_TIM13EN			(1 << 7)
#define RCC_APB1ENR_TIM12EN			(1 << 6)
#define RCC_APB1ENR_TIM7EN			(1 << 5)
#define RCC_APB1ENR_TIM6EN			(1 << 4)
#define RCC_APB1ENR_TIM5EN			(1 << 3)
#define RCC_APB1ENR_TIM4EN			(1 << 2)
#define RCC_APB1ENR_TIM3EN			(1 << 1)
#define RCC_APB1ENR_TIM2EN			(1 << 0)

/* --- RCC_APB2ENR values ------------------------------------------------- */

#define RCC_APB2ENR_MDIOEN			(1 << 30)
#define RCC_APB2ENR_DFSDM1EN		(1 << 29)
#define RCC_APB2ENR_DSIEN			(1 << 27)
#define RCC_APB2ENR_LTDCEN			(1 << 26)
#define RCC_APB2ENR_SAI2EN			(1 << 23)
#define RCC_APB2ENR_SAI1EN			(1 << 22)
#define RCC_APB2ENR_SPI6EN			(1 << 21)
#define RCC_APB2ENR_SPI5EN			(1 << 20)
#define RCC_APB2ENR_TIM11EN			(1 << 18)
#define RCC_APB2ENR_TIM10EN			(1 << 17)
#define RCC_APB2ENR_TIM9EN			(1 << 16)
#define RCC_APB2ENR_SYSCFGEN		(1 << 14)
#define RCC_APB2ENR_SPI4EN			(1 << 13)
#define RCC_APB2ENR_SPI1EN			(1 << 12)
#define RCC_APB2ENR_SDMMC1EN		(1 << 11)
#define RCC_APB2ENR_ADC3EN			(1 << 10)
#define RCC_APB2ENR_ADC2EN			(1 << 9)
#define RCC_APB2ENR_ADC1EN			(1 << 8)
#define RCC_APB2ENR_SDMMC2EN		(1 << 7)
#define RCC_APB2ENR_USART6EN		(1 << 5)
#define RCC_APB2ENR_USART1EN		(1 << 4)
#define RCC_APB2ENR_TIM8EN			(1 << 1)
#define RCC_APB2ENR_TIM1EN			(1 << 0)

/* --- RCC_AHB1LPENR values ------------------------------------------------- */

#define RCC_AHB1LPENR_OTGHSULPILPEN		(1 << 30)
#define RCC_AHB1LPENR_OTGHSLPEN			(1 << 29)
#define RCC_AHB1LPENR_ETHMACPTPLPEN		(1 << 28)
#define RCC_AHB1LPENR_ETHMACRXLPEN		(1 << 27)
#define RCC_AHB1LPENR_ETHMACTXLPEN		(1 << 26)
#define RCC_AHB1LPENR_ETHMACLPEN		(1 << 25)
#define RCC_AHB1LPENR_DMA2DLPEN			(1 << 23)
#define RCC_AHB1LPENR_DMA2LPEN			(1 << 22)
#define RCC_AHB1LPENR_DMA1LPEN			(1 << 21)
#define RCC_AHB1LPENR_DTCMLPEN			(1 << 20)
#define RCC_AHB1LPENR_BKPSRAMLPEN		(1 << 18)
#define RCC_AHB1LPENR_SRAM2LPEN			(1 << 17)
#define RCC_AHB1LPENR_SRAM1LPEN			(1 << 16)
#define RCC_AHB1LPENR_FLITFLPEN			(1 << 15)
#define RCC_AHB1LPENR_AXILPEN			(1 << 13)
#define RCC_AHB1LPENR_CRCLPEN			(1 << 12)
#define RCC_AHB1LPENR_GPIOKLPEN			(1 << 10)
#define RCC_AHB1LPENR_GPIOJLPEN			(1 << 9)
#define RCC_AHB1LPENR_GPIOILPEN			(1 << 8)
#define RCC_AHB1LPENR_GPIOHLPEN			(1 << 7)
#define RCC_AHB1LPENR_GPIOGLPEN			(1 << 6)
#define RCC_AHB1LPENR_GPIOFLPEN			(1 << 5)
#define RCC_AHB1LPENR_GPIOELPEN			(1 << 4)
#define RCC_AHB1LPENR_GPIODLPEN			(1 << 3)
#define RCC_AHB1LPENR_GPIOCLPEN			(1 << 2)
#define RCC_AHB1LPENR_GPIOBLPEN			(1 << 1)
#define RCC_AHB1LPENR_GPIOALPEN			(1 << 0)

/* --- RCC_AHB2LPENR values ------------------------------------------------- */

#define RCC_AHB2LPENR_OTGFSLPEN			(1 << 7)
#define RCC_AHB2LPENR_RNGLPEN			(1 << 6)
#define RCC_AHB2LPENR_HASHLPEN			(1 << 5)
#define RCC_AHB2LPENR_CRYPLPEN			(1 << 4)
#define RCC_AHB2LPENR_JPEGLPEN			(1 << 1)
#define RCC_AHB2LPENR_DCMILPEN			(1 << 0)

/* --- RCC_AHB3LPENR values ------------------------------------------------- */

#define RCC_AHB3LPENR_QSPILPEN			(1 << 1)
#define RCC_AHB3LPENR_FMCLPEN			(1 << 0)

/* --- RCC_APB1LPENR values ------------------------------------------------- */

#define RCC_APB1LPENR_UART8LPEN			(1 << 31)
#define RCC_APB1LPENR_UART7LPEN			(1 << 30)
#define RCC_APB1LPENR_DACLPEN			(1 << 29)
#define RCC_APB1LPENR_PWRLPEN			(1 << 28)
#define RCC_APB1LPENR_CECLPEN			(1 << 27)
#define RCC_APB1LPENR_CAN2LPEN			(1 << 26)
#define RCC_APB1LPENR_CAN1LPEN			(1 << 25)
#define RCC_APB1LPENR_I2C4LPEN			(1 << 24)
#define RCC_APB1LPENR_I2C3LPEN			(1 << 23)
#define RCC_APB1LPENR_I2C2LPEN			(1 << 22)
#define RCC_APB1LPENR_I2C1LPEN			(1 << 21)
#define RCC_APB1LPENR_UART5LPEN			(1 << 20)
#define RCC_APB1LPENR_UART4LPEN			(1 << 19)
#define RCC_APB1LPENR_USART3LPEN		(1 << 18)
#define RCC_APB1LPENR_USART2LPEN		(1 << 17)
#define RCC_APB1LPENR_SPIDIFRXLPEN		(1 << 16)
#define RCC_APB1LPENR_SPI3LPEN			(1 << 15)
#define RCC_APB1LPENR_SPI2LPEN			(1 << 14)
#define RCC_APB1LPENR_CAN3LPEN			(1 << 13)
#define RCC_APB1LPENR_WWDGLPEN			(1 << 11)
#define RCC_APB1LPENR_RTCAPBLPEN		(1 << 10)
#define RCC_APB1LPENR_LPTIM1LPEN		(1 << 9)
#define RCC_APB1LPENR_TIM14LPEN			(1 << 8)
#define RCC_APB1LPENR_TIM13LPEN			(1 << 7)
#define RCC_APB1LPENR_TIM12LPEN			(1 << 6)
#define RCC_APB1LPENR_TIM7LPEN			(1 << 5)
#define RCC_APB1LPENR_TIM6LPEN			(1 << 4)
#define RCC_APB1LPENR_TIM5LPEN			(1 << 3)
#define RCC_APB1LPENR_TIM4LPEN			(1 << 2)
#define RCC_APB1LPENR_TIM3LPEN			(1 << 1)
#define RCC_APB1LPENR_TIM2LPEN			(1 << 0)

/* --- RCC_APB2LPENR values ------------------------------------------------- */

#define RCC_APB2LPENR_MDIOLPEN			(1 << 30)
#define RCC_APB2LPENR_DFSDM1LPEN		(1 << 29)
#define RCC_APB2LPENR_DSILPEN			(1 << 27)
#define RCC_APB2LPENR_LTDCLPEN			(1 << 26)
#define RCC_APB2LPENR_SAI2LPEN			(1 << 23)
#define RCC_APB2LPENR_SAI1LPEN			(1 << 22)
#define RCC_APB2LPENR_SPI6LPEN			(1 << 21)
#define RCC_APB2LPENR_SPI5LPEN			(1 << 20)
#define RCC_APB2LPENR_TIM11LPEN			(1 << 18)
#define RCC_APB2LPENR_TIM10LPEN			(1 << 17)
#define RCC_APB2LPENR_TIM9LPEN			(1 << 16)
#define RCC_APB2LPENR_SYSCFGLPEN		(1 << 14)
#define RCC_APB2LPENR_SPI4LPEN			(1 << 13)
#define RCC_APB2LPENR_SPI1LPEN			(1 << 12)
#define RCC_APB2LPENR_SDMMC1LPEN		(1 << 11)
#define RCC_APB2LPENR_ADC3LPEN			(1 << 10)
#define RCC_APB2LPENR_ADC2LPEN			(1 << 9)
#define RCC_APB2LPENR_ADC1LPEN			(1 << 8)
#define RCC_APB2LPENR_SDMMC2LPEN		(1 << 7)
#define RCC_APB2LPENR_USART6LPEN		(1 << 5)
#define RCC_APB2LPENR_USART1LPEN		(1 << 4)
#define RCC_APB2LPENR_TIM8LPEN			(1 << 1)
#define RCC_APB2LPENR_TIM1LPEN			(1 << 0)

/* --- RCC_BDCR values ----------------------------------------------------- */

#define RCC_BDCR_BDRST				(1 << 16)
#define RCC_BDCR_RTCEN				(1 << 15)
#define RCC_BDCR_RTCSEL_MASK			0x3
#define RCC_BDCR_RTCSEL_SHIFT			8
#define RCC_BDCR_RTCSEL_NONE			0
#define RCC_BDCR_RTCSEL_LSE			1
#define RCC_BDCR_RTCSEL_LSI			2
#define RCC_BDCR_RTCSEL_HSE			3
#define RCC_BDCR_LSEDRV_MASK			0x3
#define RCC_BDCR_LSEDRV_SHIFT			3
#define RCC_BDCR_LSEDRV_LOW			0
#define RCC_BDCR_LSEDRV_MEDH			1 /* good job st */
#define RCC_BDCR_LSEDRV_MEDL			2
#define RCC_BDCR_LSEDRV_HIGH			3
#define RCC_BDCR_LSEBYP				(1 << 2)
#define RCC_BDCR_LSERDY				(1 << 1)
#define RCC_BDCR_LSEON				(1 << 0)

/* --- RCC_CSR values ------------------------------------------------------ */

#define RCC_CSR_LPWRRSTF			(1 << 31)
#define RCC_CSR_WWDGRSTF			(1 << 30)
#define RCC_CSR_IWDGRSTF			(1 << 29)
#define RCC_CSR_SFTRSTF				(1 << 28)
#define RCC_CSR_PORRSTF				(1 << 27)
#define RCC_CSR_PINRSTF				(1 << 26)
#define RCC_CSR_BORRSTF				(1 << 25)
#define RCC_CSR_RMVF				(1 << 24)
#define RCC_CSR_LSIRDY				(1 << 1)
#define RCC_CSR_LSION				(1 << 0)

/* --- RCC_SSCGR values ---------------------------------------------------- */

#define RCC_SSCGR_SSCGEN			(1 << 31)
#define RCC_SSCGR_SPREADSEL			(1 << 30)
#define RCC_SSCGR_INCSTEP_MASK			0x7fff
#define RCC_SSCGR_INCSTEP_SHIFT			13
#define RCC_SSCGR_MODPER_MASK			0x1fff
#define RCC_SSCGR_MODPER_SHIFT			0

/* --- RCC_PLLI2SCFGR values ----------------------------------------------- */

/* RCC_PLLI2SCFGR[30:28]: PLLI2SR */
#define RCC_PLLI2SCFGR_PLLI2S_MASK		0x7
#define RCC_PLLI2SCFGR_PLLI2S_SHIFT		28
#define RCC_PLLI2SCFGR_PLLI2SQ_MASK		0xf
#define RCC_PLLI2SCFGR_PLLI2SQ_SHIFT		24
#define RCC_PLLI2SCFGR_PLLI2SP_MASK		0x3
#define RCC_PLLI2SCFGR_PLLI2SP_SHIFT		16
#define RCC_PLLI2SCFGR_PLLI2SN_MASK		0x1ff
#define RCC_PLLI2SCFGR_PLLI2SN_SHIFT		6

/* --- RCC_PLLSAICFGR values ----------------------------------------------- */

#define RCC_PLLSAICFGR_PLLSAIR_MASK		0x7
#define RCC_PLLSAICFGR_PLLSAIR_SHIFT		28
#define RCC_PLLSAICFGR_PLLSAIQ_MASK		0xf
#define RCC_PLLSAICFGR_PLLSAIQ_SHIFT		24
#define RCC_PLLSAICFGR_PLLSAIP_MASK		0x3
#define RCC_PLLSAICFGR_PLLSAIP_SHIFT		16
#define RCC_PLLSAICFGR_PLLSAIN_MASK		0x1FF
#define RCC_PLLSAICFGR_PLLSAIN_SHIFT		6

/* --- RCC_DCKCFGR1 values -------------------------------------------------- */

#define RCC_DCKCFGR1_ADFSDMSEL		(1 << 26)
#define RCC_DCKCFGR1_DFSDMSEL		(1 << 25)
#define RCC_DCKCFGR1_TIMPRE			(1<<24)
#define RCC_DCKCFGR1_SAI2SEL_MASK		0x3
#define RCC_DCKCFGR1_SAI2SEL_SHIFT		22
#define RCC_DCKCFGR1_SAI1SEL_MASK		0x3
#define RCC_DCKCFGR1_SAI1SEL_SHIFT		20
#define RCC_DCKCFGR1_PLLSAIDIVR_MASK		0x3
#define RCC_DCKCFGR1_PLLSAIDIVR_SHIFT		16
#define RCC_DCKCFGR1_PLLSAIDIVR_DIVR_2		0
#define RCC_DCKCFGR1_PLLSAIDIVR_DIVR_4		1
#define RCC_DCKCFGR1_PLLSAIDIVR_DIVR_8		2
#define RCC_DCKCFGR1_PLLSAIDIVR_DIVR_16		3
#define RCC_DCKCFGR1_PLLSAIDIVQ_MASK		0x1f
#define RCC_DCKCFGR1_PLLSAIDIVQ_SHIFT		8
#define RCC_DCKCFGR1_PLLI2SDIVQ_MASK		0x1f
#define RCC_DCKCFGR1_PLLI2SDIVQ_SHIFT		0

/* --- RCC_DCKCFGR2 values -------------------------------------------------- */

#define RCC_DCKCFGR2_DSISEL				(1 << 30)
#define RCC_DCKCFGR2_SDMMC2SEL			(1 << 29)
#define RCC_DCKCFGR2_SDMMCSEL			(1<<28)
#define RCC_DCKCFGR2_CK48MSEL			(1<<27)
#define RCC_DCKCFGR2_CECSEL				(1<<26)
#define RCC_DCKCFGR2_LPTIM1SEL_MASK		0x3
#define RCC_DCKCFGR2_LPTIM1SEL_SHIFT	24
#define RCC_DCKCFGR2_I2C4SEL_MASK		0x3
#define RCC_DCKCFGR2_I2C4SEL_SHIFT		22
#define RCC_DCKCFGR2_I2C3SEL_MASK		0x3
#define RCC_DCKCFGR2_I2C3SEL_SHIFT		20
#define RCC_DCKCFGR2_I2C2SEL_MASK		0x3
#define RCC_DCKCFGR2_I2C2SEL_SHIFT		18
#define RCC_DCKCFGR2_I2C1SEL_MASK		0x3
#define RCC_DCKCFGR2_I2C1SEL_SHIFT		16
#define RCC_DCKCFGR2_UART8SEL_MASK		0x3
#define RCC_DCKCFGR2_UART8SEL_SHIFT		14
#define RCC_DCKCFGR2_UART7SEL_MASK		0x3
#define RCC_DCKCFGR2_UART7SEL_SHIFT		12
#define RCC_DCKCFGR2_USART6SEL_MASK		0x3
#define RCC_DCKCFGR2_USART6SEL_SHIFT	10
#define RCC_DCKCFGR2_UART5SEL_MASK		0x3
#define RCC_DCKCFGR2_UART5SEL_SHIFT		8
#define RCC_DCKCFGR2_UART4SEL_MASK		0x3
#define RCC_DCKCFGR2_UART4SEL_SHIFT		6
#define RCC_DCKCFGR2_UART3SEL_MASK		0x3
#define RCC_DCKCFGR2_UART3SEL_SHIFT		4
#define RCC_DCKCFGR2_UART2SEL_MASK		0x3
#define RCC_DCKCFGR2_UART2SEL_SHIFT		2
#define RCC_DCKCFGR2_UART1SEL_MASK		0x3
#define RCC_DCKCFGR2_UART1SEL_SHIFT		0

/**
  * @brief Reset and Clock Control
  */

enum rcc_osc {
	RCC_PLL,
	RCC_PLLSAI,
	RCC_PLLI2S,
	RCC_HSE,
	RCC_HSI,
	RCC_LSE,
	RCC_LSI
};

#define PLL RCC_PLL
#define HSE RCC_HSE
#define HSI RCC_HSI
#define LSE RCC_LSE
#define LSI RCC_LSI

/**
  * @brief  RCC PLL configuration structure definition
  */
typedef struct
{
  uint32_t PLLState;   /*!< The new state of the PLL.
                            This parameter can be a value of @ref RCC_PLL_Config                      */

  uint32_t PLLSource;  /*!< RCC_PLLSource: PLL entry clock source.
                            This parameter must be a value of @ref RCC_PLL_Clock_Source               */

  uint32_t PLLM;       /*!< PLLM: Division factor for PLL VCO input clock.
                            This parameter must be a number between Min_Data = 2 and Max_Data = 63    */

  uint32_t PLLN;       /*!< PLLN: Multiplication factor for PLL VCO output clock.
                            This parameter must be a number between Min_Data = 50 and Max_Data = 432  */

  uint32_t PLLP;       /*!< PLLP: Division factor for main system clock (SYSCLK).
                            This parameter must be a value of @ref RCC_PLLP_Clock_Divider             */

  uint32_t PLLQ;       /*!< PLLQ: Division factor for OTG FS, SDMMC and RNG clocks.
                            This parameter must be a number between Min_Data = 2 and Max_Data = 15    */
  uint32_t PLLR;       /*!< PLLR: Division factor for DSI clock.
                            This parameter must be a number between Min_Data = 2 and Max_Data = 7    */
}RCC_PLLInitTypeDef;

typedef struct
{
  uint32_t OscillatorType;       /*!< The oscillators to be configured.
                                      This parameter can be a value of @ref RCC_Oscillator_Type                   */

  uint32_t HSEState;             /*!< The new state of the HSE.
                                      This parameter can be a value of @ref RCC_HSE_Config                        */

  uint32_t LSEState;             /*!< The new state of the LSE.
                                      This parameter can be a value of @ref RCC_LSE_Config                        */

  uint32_t HSIState;             /*!< The new state of the HSI.
                                      This parameter can be a value of @ref RCC_HSI_Config                        */

  uint32_t HSICalibrationValue;   /*!< The HSI calibration trimming value (default is RCC_HSICALIBRATION_DEFAULT).
                                       This parameter must be a number between Min_Data = 0x00 and Max_Data = 0x1F */

  uint32_t LSIState;             /*!< The new state of the LSI.
                                      This parameter can be a value of @ref RCC_LSI_Config                        */

  RCC_PLLInitTypeDef PLL;        /*!< PLL structure parameters                                                    */
}RCC_OscInitTypeDef;

typedef struct
{
  uint32_t ClockType;             /*!< The clock to be configured.
                                       This parameter can be a value of @ref RCC_System_Clock_Type */

  uint32_t SYSCLKSource;          /*!< The clock source (SYSCLKS) used as system clock.
                                       This parameter can be a value of @ref RCC_System_Clock_Source    */

  uint32_t AHBCLKDivider;         /*!< The AHB clock (HCLK) divider. This clock is derived from the system clock (SYSCLK).
                                       This parameter can be a value of @ref RCC_AHB_Clock_Source       */

  uint32_t APB1CLKDivider;        /*!< The APB1 clock (PCLK1) divider. This clock is derived from the AHB clock (HCLK).
                                       This parameter can be a value of @ref RCC_APB1_APB2_Clock_Source */

  uint32_t APB2CLKDivider;        /*!< The APB2 clock (PCLK2) divider. This clock is derived from the AHB clock (HCLK).
                                       This parameter can be a value of @ref RCC_APB1_APB2_Clock_Source */
}RCC_ClkInitTypeDef;

/** @defgroup RCC_Oscillator_Type Oscillator Type
  * @{
  */
#define RCC_OSCILLATORTYPE_NONE            ((uint32_t)0x00000000U)
#define RCC_OSCILLATORTYPE_HSE             ((uint32_t)0x00000001U)
#define RCC_OSCILLATORTYPE_HSI             ((uint32_t)0x00000002U)
#define RCC_OSCILLATORTYPE_LSE             ((uint32_t)0x00000004U)
#define RCC_OSCILLATORTYPE_LSI             ((uint32_t)0x00000008U)
/**
  * @}
  */

/** @defgroup RCC_HSE_Config RCC HSE Config
  * @{
  */
#define RCC_HSE_OFF                      ((uint32_t)0x00000000U)
#define RCC_HSE_ON                       RCC_CR_HSEON
#define RCC_HSE_BYPASS                   ((uint32_t)(RCC_CR_HSEBYP | RCC_CR_HSEON))
/**
  * @}
  */

/** @defgroup RCC_LSE_Config RCC LSE Config
  * @{
  */
#define RCC_LSE_OFF                    ((uint32_t)0x00000000U)
#define RCC_LSE_ON                     RCC_BDCR_LSEON
#define RCC_LSE_BYPASS                 ((uint32_t)(RCC_BDCR_LSEBYP | RCC_BDCR_LSEON))
/**
  * @}
  */

/** @defgroup RCC_HSI_Config RCC HSI Config
  * @{
  */
#define RCC_HSI_OFF                    ((uint32_t)0x00000000U)
#define RCC_HSI_ON                     RCC_CR_HSION

#define RCC_HSICALIBRATION_DEFAULT     ((uint32_t)0x10U)         /* Default HSI calibration trimming value */
/**
  * @}
  */

/** @defgroup RCC_LSI_Config RCC LSI Config
  * @{
  */
#define RCC_LSI_OFF                    ((uint32_t)0x00000000U)
#define RCC_LSI_ON                     RCC_CSR_LSION
/**
  * @}
  */

/** @defgroup RCC_PLL_Config RCC PLL Config
  * @{
  */
#define RCC_PLL_NONE                   ((uint32_t)0x00000000U)
#define RCC_PLL_OFF                    ((uint32_t)0x00000001U)
#define RCC_PLL_ON                     ((uint32_t)0x00000002U)
/**
  * @}
  */

/** @defgroup RCC_PLLP_Clock_Divider PLLP Clock Divider
  * @{
  */
#define RCC_PLLP_DIV2                  ((uint32_t)0x00000002U)
#define RCC_PLLP_DIV4                  ((uint32_t)0x00000004U)
#define RCC_PLLP_DIV6                  ((uint32_t)0x00000006U)
#define RCC_PLLP_DIV8                  ((uint32_t)0x00000008U)
/**
  * @}
  */

/** @defgroup RCC_PLL_Clock_Source PLL Clock Source
  * @{
  */
#define RCC_PLLSOURCE_HSI                RCC_PLLCFGR_PLLSRC_HSI
#define RCC_PLLSOURCE_HSE                RCC_PLLCFGR_PLLSRC_HSE
/**
  * @}
  */

/** @defgroup RCC_System_Clock_Type RCC System Clock Type
  * @{
  */
#define RCC_CLOCKTYPE_SYSCLK             ((uint32_t)0x00000001U)
#define RCC_CLOCKTYPE_HCLK               ((uint32_t)0x00000002U)
#define RCC_CLOCKTYPE_PCLK1              ((uint32_t)0x00000004U)
#define RCC_CLOCKTYPE_PCLK2              ((uint32_t)0x00000008U)
/**
  * @}
  */

/** @defgroup RCC_System_Clock_Source RCC System Clock Source
  * @{
  */
#define RCC_SYSCLKSOURCE_HSI             RCC_CFGR_SW_HSI
#define RCC_SYSCLKSOURCE_HSE             RCC_CFGR_SW_HSE
#define RCC_SYSCLKSOURCE_PLLCLK          RCC_CFGR_SW_PLL
/**
  * @}
  */


/** @defgroup RCC_System_Clock_Source_Status System Clock Source Status
  * @{
  */
#define RCC_SYSCLKSOURCE_STATUS_HSI      RCC_CFGR_SWS_HSI   /*!< HSI used as system clock */
#define RCC_SYSCLKSOURCE_STATUS_HSE      RCC_CFGR_SWS_HSE   /*!< HSE used as system clock */
#define RCC_SYSCLKSOURCE_STATUS_PLLCLK   RCC_CFGR_SWS_PLL   /*!< PLL used as system clock */
/**
  * @}
  */

/** @defgroup RCC_AHB_Clock_Source RCC AHB Clock Source
  * @{
  */
#define RCC_SYSCLK_DIV1                  RCC_CFGR_HPRE_DIV1
#define RCC_SYSCLK_DIV2                  RCC_CFGR_HPRE_DIV2
#define RCC_SYSCLK_DIV4                  RCC_CFGR_HPRE_DIV4
#define RCC_SYSCLK_DIV8                  RCC_CFGR_HPRE_DIV8
#define RCC_SYSCLK_DIV16                 RCC_CFGR_HPRE_DIV16
#define RCC_SYSCLK_DIV64                 RCC_CFGR_HPRE_DIV64
#define RCC_SYSCLK_DIV128                RCC_CFGR_HPRE_DIV128
#define RCC_SYSCLK_DIV256                RCC_CFGR_HPRE_DIV256
#define RCC_SYSCLK_DIV512                RCC_CFGR_HPRE_DIV512
/**
  * @}
  */

/** @defgroup RCC_APB1_APB2_Clock_Source RCC APB1/APB2 Clock Source
  * @{
  */
#define RCC_HCLK_DIV1                    RCC_CFGR_PPRE1_DIV1
#define RCC_HCLK_DIV2                    RCC_CFGR_PPRE1_DIV2
#define RCC_HCLK_DIV4                    RCC_CFGR_PPRE1_DIV4
#define RCC_HCLK_DIV8                    RCC_CFGR_PPRE1_DIV8
#define RCC_HCLK_DIV16                   RCC_CFGR_PPRE1_DIV16
/**
  * @}
  */

/** @defgroup RCC_RTC_Clock_Source RCC RTC Clock Source
  * @{
  */
#define RCC_RTCCLKSOURCE_LSE             ((uint32_t)0x00000100U)
#define RCC_RTCCLKSOURCE_LSI             ((uint32_t)0x00000200U)
#define RCC_RTCCLKSOURCE_HSE_DIV2        ((uint32_t)0x00020300U)
#define RCC_RTCCLKSOURCE_HSE_DIV3        ((uint32_t)0x00030300U)
#define RCC_RTCCLKSOURCE_HSE_DIV4        ((uint32_t)0x00040300U)
#define RCC_RTCCLKSOURCE_HSE_DIV5        ((uint32_t)0x00050300U)
#define RCC_RTCCLKSOURCE_HSE_DIV6        ((uint32_t)0x00060300U)
#define RCC_RTCCLKSOURCE_HSE_DIV7        ((uint32_t)0x00070300U)
#define RCC_RTCCLKSOURCE_HSE_DIV8        ((uint32_t)0x00080300U)
#define RCC_RTCCLKSOURCE_HSE_DIV9        ((uint32_t)0x00090300U)
#define RCC_RTCCLKSOURCE_HSE_DIV10       ((uint32_t)0x000A0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV11       ((uint32_t)0x000B0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV12       ((uint32_t)0x000C0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV13       ((uint32_t)0x000D0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV14       ((uint32_t)0x000E0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV15       ((uint32_t)0x000F0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV16       ((uint32_t)0x00100300U)
#define RCC_RTCCLKSOURCE_HSE_DIV17       ((uint32_t)0x00110300U)
#define RCC_RTCCLKSOURCE_HSE_DIV18       ((uint32_t)0x00120300U)
#define RCC_RTCCLKSOURCE_HSE_DIV19       ((uint32_t)0x00130300U)
#define RCC_RTCCLKSOURCE_HSE_DIV20       ((uint32_t)0x00140300U)
#define RCC_RTCCLKSOURCE_HSE_DIV21       ((uint32_t)0x00150300U)
#define RCC_RTCCLKSOURCE_HSE_DIV22       ((uint32_t)0x00160300U)
#define RCC_RTCCLKSOURCE_HSE_DIV23       ((uint32_t)0x00170300U)
#define RCC_RTCCLKSOURCE_HSE_DIV24       ((uint32_t)0x00180300U)
#define RCC_RTCCLKSOURCE_HSE_DIV25       ((uint32_t)0x00190300U)
#define RCC_RTCCLKSOURCE_HSE_DIV26       ((uint32_t)0x001A0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV27       ((uint32_t)0x001B0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV28       ((uint32_t)0x001C0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV29       ((uint32_t)0x001D0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV30       ((uint32_t)0x001E0300U)
#define RCC_RTCCLKSOURCE_HSE_DIV31       ((uint32_t)0x001F0300U)
/**
  * @}
  */

/** @defgroup RCC_MCO_Index RCC MCO Index
  * @{
  */
#define RCC_MCO1                         ((uint32_t)0x00000000U)
#define RCC_MCO2                         ((uint32_t)0x00000001U)
/**
  * @}
  */

/** @defgroup RCC_MCO1_Clock_Source RCC MCO1 Clock Source
  * @{
  */
#define RCC_MCO1SOURCE_HSI               ((uint32_t)0x00000000U)
#define RCC_MCO1SOURCE_LSE               RCC_CFGR_MCO1_0
#define RCC_MCO1SOURCE_HSE               RCC_CFGR_MCO1_1
#define RCC_MCO1SOURCE_PLLCLK            RCC_CFGR_MCO1
/**
  * @}
  */

/** @defgroup RCC_MCO2_Clock_Source RCC MCO2 Clock Source
  * @{
  */
#define RCC_MCO2SOURCE_SYSCLK            ((uint32_t)0x00000000U)
#define RCC_MCO2SOURCE_PLLI2SCLK         RCC_CFGR_MCO2_0
#define RCC_MCO2SOURCE_HSE               RCC_CFGR_MCO2_1
#define RCC_MCO2SOURCE_PLLCLK            RCC_CFGR_MCO2
/**
  * @}
  */

/** @defgroup RCC_MCOx_Clock_Prescaler RCC MCO1 Clock Prescaler
  * @{
  */
#define RCC_MCODIV_1                    ((uint32_t)0x00000000U)
#define RCC_MCODIV_2                    RCC_CFGR_MCO1PRE_2
#define RCC_MCODIV_3                    ((uint32_t)RCC_CFGR_MCO1PRE_0 | RCC_CFGR_MCO1PRE_2)
#define RCC_MCODIV_4                    ((uint32_t)RCC_CFGR_MCO1PRE_1 | RCC_CFGR_MCO1PRE_2)
#define RCC_MCODIV_5                    RCC_CFGR_MCO1PRE
/**
  * @}
  */

/** @defgroup RCC_Interrupt RCC Interrupt
  * @{
  */
#define RCC_IT_LSIRDY                    ((uint8_t)0x01U)
#define RCC_IT_LSERDY                    ((uint8_t)0x02U)
#define RCC_IT_HSIRDY                    ((uint8_t)0x04U)
#define RCC_IT_HSERDY                    ((uint8_t)0x08U)
#define RCC_IT_PLLRDY                    ((uint8_t)0x10U)
#define RCC_IT_PLLI2SRDY                 ((uint8_t)0x20U)
#define RCC_IT_PLLSAIRDY                 ((uint8_t)0x40U)
#define RCC_IT_CSS                       ((uint8_t)0x80U)
/**
  * @}
  */

/** @defgroup RCC_Flag RCC Flags
  *        Elements values convention: 0XXYYYYYb
  *           - YYYYY  : Flag position in the register
  *           - 0XX  : Register index
  *                 - 01: CR register
  *                 - 10: BDCR register
  *                 - 11: CSR register
  * @{
  */
/* Flags in the CR register */
#define RCC_FLAG_HSIRDY                  ((uint8_t)0x21U)
#define RCC_FLAG_HSERDY                  ((uint8_t)0x31U)
#define RCC_FLAG_PLLRDY                  ((uint8_t)0x39U)
#define RCC_FLAG_PLLI2SRDY               ((uint8_t)0x3BU)
#define RCC_FLAG_PLLSAIRDY               ((uint8_t)0x3CU)

/* Flags in the BDCR register */
#define RCC_FLAG_LSERDY                  ((uint8_t)0x41U)

/* Flags in the CSR register */
#define RCC_FLAG_LSIRDY                  ((uint8_t)0x61U)
#define RCC_FLAG_BORRST                  ((uint8_t)0x79U)
#define RCC_FLAG_PINRST                  ((uint8_t)0x7AU)
#define RCC_FLAG_PORRST                  ((uint8_t)0x7BU)
#define RCC_FLAG_SFTRST                  ((uint8_t)0x7CU)
#define RCC_FLAG_IWDGRST                 ((uint8_t)0x7DU)
#define RCC_FLAG_WWDGRST                 ((uint8_t)0x7EU)
#define RCC_FLAG_LPWRRST                 ((uint8_t)0x7FU)
/**
  * @}
  */

/* Exported macro ------------------------------------------------------------*/
/** @defgroup RCC_Exported_Macros RCC Exported Macros
  * @{
  */

/** @brief  Macro to configure the main PLL clock source, multiplication and division factors.
  * @note   This function must be used only when the main PLL is disabled.
  * @param  __RCC_PLLSource__: specifies the PLL entry clock source.
  *         This parameter can be one of the following values:
  *            @arg RCC_PLLSOURCE_HSI: HSI oscillator clock selected as PLL clock entry
  *            @arg RCC_PLLSOURCE_HSE: HSE oscillator clock selected as PLL clock entry
  * @note   This clock source (RCC_PLLSource) is common for the main PLL and PLLI2S.
  * @param  __PLLM__: specifies the division factor for PLL VCO input clock
  *         This parameter must be a number between Min_Data = 2 and Max_Data = 63.
  * @note   You have to set the PLLM parameter correctly to ensure that the VCO input
  *         frequency ranges from 1 to 2 MHz. It is recommended to select a frequency
  *         of 2 MHz to limit PLL jitter.
  * @param  __PLLN__: specifies the multiplication factor for PLL VCO output clock
  *         This parameter must be a number between Min_Data = 50 and Max_Data = 432.
  * @note   You have to set the PLLN parameter correctly to ensure that the VCO
  *         output frequency is between 100 and 432 MHz.
  * @param  __PLLP__: specifies the division factor for main system clock (SYSCLK)
  *         This parameter must be a number in the range {2, 4, 6, or 8}.
  * @note   You have to set the PLLP parameter correctly to not exceed 216 MHz on
  *         the System clock frequency.
  * @param  __PLLQ__: specifies the division factor for OTG FS, SDMMC and RNG clocks
  *         This parameter must be a number between Min_Data = 2 and Max_Data = 15.
  * @note   If the USB OTG FS is used in your application, you have to set the
  *         PLLQ parameter correctly to have 48 MHz clock for the USB. However,
  *         the SDMMC and RNG need a frequency lower than or equal to 48 MHz to work
  *         correctly.
  * @param  __PLLR__: specifies the division factor for DSI clock
  *         This parameter must be a number between Min_Data = 2 and Max_Data = 7.
  */
#define __HAL_RCC_PLL_CONFIG(__RCC_PLLSource__, __PLLM__, __PLLN__, __PLLP__, __PLLQ__,__PLLR__)  \
                            (RCC->PLLCFGR = ((__RCC_PLLSource__) | (__PLLM__)                   | \
                            ((__PLLN__) << RCC_PLLCFGR_PLLN_SHIFT)                      | \
                            ((((__PLLP__) >> 1) -1) << RCC_PLLCFGR_PLLP_SHIFT)          | \
                            ((__PLLQ__) << RCC_PLLCFGR_PLLQ_SHIFT)                      | \
                            ((__PLLR__) << RCC_PLLCFGR_PLLR_SHIFT)))

/** @defgroup RCC_AHB1_Clock_Enable_Disable AHB1 Peripheral Clock Enable Disable
  * @brief  Enable or disable the AHB1 peripheral clock.
  * @note   After reset, the peripheral clock (used for registers read/write access)
  *         is disabled and the application software has to enable this clock before
  *         using it.
  * @{
  */
#define __HAL_RCC_CRC_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_CRCEN);\
                                        UNUSED(tmpreg); \
                                      } while(0)

#define __HAL_RCC_DMA1_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_DMA1EN);\
                                        UNUSED(tmpreg); \
                                      } while(0)

#define __HAL_RCC_CRC_CLK_DISABLE()          (RCC->AHB1ENR &= ~(RCC_AHB1ENR_CRCEN))
#define __HAL_RCC_DMA1_CLK_DISABLE()         (RCC->AHB1ENR &= ~(RCC_AHB1ENR_DMA1EN))

/**
  * @}
  */

/** @defgroup RCC_APB1_Clock_Enable_Disable APB1 Peripheral Clock Enable Disable
  * @brief  Enable or disable the Low Speed APB (APB1) peripheral clock.
  * @note   After reset, the peripheral clock (used for registers read/write access)
  *         is disabled and the application software has to enable this clock before
  *         using it.
  * @{
  */
#define __HAL_RCC_WWDG_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_WWDGEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_WWDGEN);\
                                        UNUSED(tmpreg); \
                                      } while(0)

#define __HAL_RCC_PWR_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB1ENR, RCC_APB1ENR_PWREN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB1ENR, RCC_APB1ENR_PWREN);\
                                        UNUSED(tmpreg); \
                                      } while(0)

#define __HAL_RCC_WWDG_CLK_DISABLE()   (RCC->APB1ENR &= ~(RCC_APB1ENR_WWDGEN))
#define __HAL_RCC_PWR_CLK_DISABLE()    (RCC->APB1ENR &= ~(RCC_APB1ENR_PWREN))
/**
  * @}
  */

/** @defgroup RCC_APB2_Clock_Enable_Disable APB2 Peripheral Clock Enable Disable
  * @brief  Enable or disable the High Speed APB (APB2) peripheral clock.
  * @note   After reset, the peripheral clock (used for registers read/write access)
  *         is disabled and the application software has to enable this clock before
  *         using it.
  * @{
  */
#define __HAL_RCC_SYSCFG_CLK_ENABLE()   do { \
                                        __IO uint32_t tmpreg; \
                                        SET_BIT(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN);\
                                        /* Delay after an RCC peripheral clock enabling */ \
                                        tmpreg = READ_BIT(RCC->APB2ENR, RCC_APB2ENR_SYSCFGEN);\
                                        UNUSED(tmpreg); \
                                      } while(0)

#define __HAL_RCC_SYSCFG_CLK_DISABLE() (RCC->APB2ENR &= ~(RCC_APB2ENR_SYSCFGEN))

/**
  * @}
  */

/** @defgroup RCC_AHB1_Peripheral_Clock_Enable_Disable_Status AHB1 Peripheral Clock Enable Disable Status
  * @brief  Get the enable or disable status of the AHB1 peripheral clock.
  * @note   After reset, the peripheral clock (used for registers read/write access)
  *         is disabled and the application software has to enable this clock before
  *         using it.
  * @{
  */
#define __HAL_RCC_CRC_IS_CLK_ENABLED()         ((RCC->AHB1ENR & (RCC_AHB1ENR_CRCEN)) != RESET)
#define __HAL_RCC_DMA1_IS_CLK_ENABLED()        ((RCC->AHB1ENR & (RCC_AHB1ENR_DMA1EN)) != RESET)

#define __HAL_RCC_CRC_IS_CLK_DISABLED()        ((RCC->AHB1ENR & (RCC_AHB1ENR_CRCEN)) == RESET)
#define __HAL_RCC_DMA1_IS_CLK_DISABLED()       ((RCC->AHB1ENR & (RCC_AHB1ENR_DMA1EN)) == RESET)
/**
  * @}
  */

/** @defgroup RCC_APB1_Clock_Enable_Disable_Status APB1 Peripheral Clock Enable Disable  Status
  * @brief  Get the enable or disable status of the APB1 peripheral clock.
  * @note   After reset, the peripheral clock (used for registers read/write access)
  *         is disabled and the application software has to enable this clock before
  *         using it.
  * @{
  */
#define __HAL_RCC_WWDG_IS_CLK_ENABLED()        ((RCC->APB1ENR & (RCC_APB1ENR_WWDGEN)) != RESET)
#define __HAL_RCC_PWR_IS_CLK_ENABLED()         ((RCC->APB1ENR & (RCC_APB1ENR_PWREN)) != RESET)

#define __HAL_RCC_WWDG_IS_CLK_DISABLED()       ((RCC->APB1ENR & (RCC_APB1ENR_WWDGEN)) == RESET)
#define __HAL_RCC_PWR_IS_CLK_DISABLED()        ((RCC->APB1ENR & (RCC_APB1ENR_PWREN)) == RESET)
/**
  * @}
  */

/** @defgroup RCC_APB2_Clock_Enable_Disable_Status APB2 Peripheral Clock Enable Disable Status
  * @brief  EGet the enable or disable status of the APB2 peripheral clock.
  * @note   After reset, the peripheral clock (used for registers read/write access)
  *         is disabled and the application software has to enable this clock before
  *         using it.
  * @{
  */
#define __HAL_RCC_SYSCFG_IS_CLK_ENABLED()      ((RCC->APB2ENR & (RCC_APB2ENR_SYSCFGEN)) != RESET)
#define __HAL_RCC_SYSCFG_IS_CLK_DISABLED()     ((RCC->APB2ENR & (RCC_APB2ENR_SYSCFGEN)) == RESET)
/**
  * @}
  */

/** @defgroup RCC_Peripheral_Clock_Force_Release RCC Peripheral Clock Force Release
  * @brief  Force or release AHB peripheral reset.
  * @{
  */
#define __HAL_RCC_AHB1_FORCE_RESET()    (RCC->AHB1RSTR = 0xFFFFFFFFU)
#define __HAL_RCC_CRC_FORCE_RESET()     (RCC->AHB1RSTR |= (RCC_AHB1RSTR_CRCRST))
#define __HAL_RCC_DMA1_FORCE_RESET()    (RCC->AHB1RSTR |= (RCC_AHB1RSTR_DMA1RST))

#define __HAL_RCC_AHB1_RELEASE_RESET()  (RCC->AHB1RSTR = 0x00U)
#define __HAL_RCC_CRC_RELEASE_RESET()   (RCC->AHB1RSTR &= ~(RCC_AHB1RSTR_CRCRST))
#define __HAL_RCC_DMA1_RELEASE_RESET()  (RCC->AHB1RSTR &= ~(RCC_AHB1RSTR_DMA1RST))
/**
  * @}
  */

/** @defgroup RCC_APB1_Force_Release_Reset APB1 Force Release Reset
  * @brief  Force or release APB1 peripheral reset.
  * @{
  */
#define __HAL_RCC_APB1_FORCE_RESET()     (RCC->APB1RSTR = 0xFFFFFFFFU)
#define __HAL_RCC_WWDG_FORCE_RESET()     (RCC->APB1RSTR |= (RCC_APB1RSTR_WWDGRST))
#define __HAL_RCC_PWR_FORCE_RESET()      (RCC->APB1RSTR |= (RCC_APB1RSTR_PWRRST))

#define __HAL_RCC_APB1_RELEASE_RESET()   (RCC->APB1RSTR = 0x00U)
#define __HAL_RCC_WWDG_RELEASE_RESET()   (RCC->APB1RSTR &= ~(RCC_APB1RSTR_WWDGRST))
#define __HAL_RCC_PWR_RELEASE_RESET()    (RCC->APB1RSTR &= ~(RCC_APB1RSTR_PWRRST))
/**
  * @}
  */

/** @defgroup RCC_APB2_Force_Release_Reset APB2 Force Release Reset
  * @brief  Force or release APB2 peripheral reset.
  * @{
  */
#define __HAL_RCC_APB2_FORCE_RESET()     (RCC->APB2RSTR = 0xFFFFFFFFU)
#define __HAL_RCC_SYSCFG_FORCE_RESET()   (RCC->APB2RSTR |= (RCC_APB2RSTR_SYSCFGRST))

#define __HAL_RCC_APB2_RELEASE_RESET()   (RCC->APB2RSTR = 0x00U)
#define __HAL_RCC_SYSCFG_RELEASE_RESET() (RCC->APB2RSTR &= ~(RCC_APB2RSTR_SYSCFGRST))

/**
  * @}
  */

/** @defgroup RCC_Peripheral_Clock_Sleep_Enable_Disable RCC Peripheral Clock Sleep Enable Disable
  * @note   Peripheral clock gating in SLEEP mode can be used to further reduce
  *         power consumption.
  * @note   After wakeup from SLEEP mode, the peripheral clock is enabled again.
  * @note   By default, all peripheral clocks are enabled during SLEEP mode.
  * @{
  */
#define __HAL_RCC_CRC_CLK_SLEEP_ENABLE()      (RCC->AHB1LPENR |= (RCC_AHB1LPENR_CRCLPEN))
#define __HAL_RCC_DMA1_CLK_SLEEP_ENABLE()     (RCC->AHB1LPENR |= (RCC_AHB1LPENR_DMA1LPEN))

#define __HAL_RCC_CRC_CLK_SLEEP_DISABLE()     (RCC->AHB1LPENR &= ~(RCC_AHB1LPENR_CRCLPEN))
#define __HAL_RCC_DMA1_CLK_SLEEP_DISABLE()    (RCC->AHB1LPENR &= ~(RCC_AHB1LPENR_DMA1LPEN))

/** @brief  Enable or disable the APB1 peripheral clock during Low Power (Sleep) mode.
  * @note   Peripheral clock gating in SLEEP mode can be used to further reduce
  *         power consumption.
  * @note   After wakeup from SLEEP mode, the peripheral clock is enabled again.
  * @note   By default, all peripheral clocks are enabled during SLEEP mode.
  */
#define __HAL_RCC_WWDG_CLK_SLEEP_ENABLE()    (RCC->APB1LPENR |= (RCC_APB1LPENR_WWDGLPEN))
#define __HAL_RCC_PWR_CLK_SLEEP_ENABLE()     (RCC->APB1LPENR |= (RCC_APB1LPENR_PWRLPEN))

#define __HAL_RCC_WWDG_CLK_SLEEP_DISABLE()   (RCC->APB1LPENR &= ~(RCC_APB1LPENR_WWDGLPEN))
#define __HAL_RCC_PWR_CLK_SLEEP_DISABLE()    (RCC->APB1LPENR &= ~(RCC_APB1LPENR_PWRLPEN))

/** @brief  Enable or disable the APB2 peripheral clock during Low Power (Sleep) mode.
  * @note   Peripheral clock gating in SLEEP mode can be used to further reduce
  *         power consumption.
  * @note   After wakeup from SLEEP mode, the peripheral clock is enabled again.
  * @note   By default, all peripheral clocks are enabled during SLEEP mode.
  */
#define __HAL_RCC_SYSCFG_CLK_SLEEP_ENABLE()  (RCC->APB2LPENR |= (RCC_APB2LPENR_SYSCFGLPEN))
#define __HAL_RCC_SYSCFG_CLK_SLEEP_DISABLE() (RCC->APB2LPENR &= ~(RCC_APB2LPENR_SYSCFGLPEN))

/**
  * @}
  */

/** @defgroup RCC_AHB1_Clock_Sleep_Enable_Disable_Status AHB1 Peripheral Clock Sleep Enable Disable Status
  * @brief  Get the enable or disable status of the AHB1 peripheral clock during Low Power (Sleep) mode.
  * @note   Peripheral clock gating in SLEEP mode can be used to further reduce
  *         power consumption.
  * @note   After wakeup from SLEEP mode, the peripheral clock is enabled again.
  * @note   By default, all peripheral clocks are enabled during SLEEP mode.
  * @{
  */
#define __HAL_RCC_CRC_IS_CLK_SLEEP_ENABLED()     ((RCC->AHB1LPENR & (RCC_AHB1LPENR_CRCLPEN)) != RESET)
#define __HAL_RCC_DMA1_IS_CLK_SLEEP_ENABLED()    ((RCC->AHB1LPENR & (RCC_AHB1LPENR_DMA1LPEN)) != RESET)

#define __HAL_RCC_CRC_IS_CLK_SLEEP_DISABLED()    ((RCC->AHB1LPENR & (RCC_AHB1LPENR_CRCLPEN)) == RESET)
#define __HAL_RCC_DMA1_IS_CLK_SLEEP_DISABLED()   ((RCC->AHB1LPENR & (RCC_AHB1LPENR_DMA1LPEN)) == RESET)
/**
  * @}
  */

/** @defgroup RCC_APB1_Clock_Sleep_Enable_Disable_Status APB1 Peripheral Clock Sleep Enable Disable Status
  * @brief  Get the enable or disable status of the APB1 peripheral clock during Low Power (Sleep) mode.
  * @note   Peripheral clock gating in SLEEP mode can be used to further reduce
  *         power consumption.
  * @note   After wakeup from SLEEP mode, the peripheral clock is enabled again.
  * @note   By default, all peripheral clocks are enabled during SLEEP mode.
  * @{
  */
#define __HAL_RCC_WWDG_IS_CLK_SLEEP_ENABLED()      ((RCC->APB1LPENR & (RCC_APB1LPENR_WWDGLPEN)) != RESET)
#define __HAL_RCC_PWR_IS_CLK_SLEEP_ENABLED()       ((RCC->APB1LPENR & (RCC_APB1LPENR_PWRLPEN)) != RESET)

#define __HAL_RCC_WWDG_IS_CLK_SLEEP_DISABLED()     ((RCC->APB1LPENR & (RCC_APB1LPENR_WWDGLPEN)) == RESET)
#define __HAL_RCC_PWR_IS_CLK_SLEEP_DISABLED()      ((RCC->APB1LPENR & (RCC_APB1LPENR_PWRLPEN)) == RESET)
/**
  * @}
  */

/** @defgroup RCC_APB2_Clock_Sleep_Enable_Disable_Status APB2 Peripheral Clock Sleep Enable Disable Status
  * @brief  Get the enable or disable status of the APB2 peripheral clock during Low Power (Sleep) mode.
  * @note   Peripheral clock gating in SLEEP mode can be used to further reduce
  *         power consumption.
  * @note   After wakeup from SLEEP mode, the peripheral clock is enabled again.
  * @note   By default, all peripheral clocks are enabled during SLEEP mode.
  * @{
  */
#define __HAL_RCC_SYSCFG_IS_CLK_SLEEP_ENABLED()    ((RCC->APB2LPENR & (RCC_APB2LPENR_SYSCFGLPEN)) != RESET)
#define __HAL_RCC_SYSCFG_IS_CLK_SLEEP_DISABLED()   ((RCC->APB2LPENR & (RCC_APB2LPENR_SYSCFGLPEN)) == RESET)
/**
  * @}
  */

/** @defgroup RCC_HSI_Configuration HSI Configuration
  * @{
  */

/** @brief  Macros to enable or disable the Internal High Speed oscillator (HSI).
  * @note   The HSI is stopped by hardware when entering STOP and STANDBY modes.
  *         It is used (enabled by hardware) as system clock source after startup
  *         from Reset, wakeup from STOP and STANDBY mode, or in case of failure
  *         of the HSE used directly or indirectly as system clock (if the Clock
  *         Security System CSS is enabled).
  * @note   HSI can not be stopped if it is used as system clock source. In this case,
  *         you have to select another source of the system clock then stop the HSI.
  * @note   After enabling the HSI, the application software should wait on HSIRDY
  *         flag to be set indicating that HSI clock is stable and can be used as
  *         system clock source.
  * @note   When the HSI is stopped, HSIRDY flag goes low after 6 HSI oscillator
  *         clock cycles.
  */
#define __HAL_RCC_HSI_ENABLE() (RCC->CR |= (RCC_CR_HSION))
#define __HAL_RCC_HSI_DISABLE() (RCC->CR &= ~(RCC_CR_HSION))

/** @brief  Macro to adjust the Internal High Speed oscillator (HSI) calibration value.
  * @note   The calibration is used to compensate for the variations in voltage
  *         and temperature that influence the frequency of the internal HSI RC.
  * @param  __HSICALIBRATIONVALUE__: specifies the calibration trimming value.
  *         (default is RCC_HSICALIBRATION_DEFAULT).
  */
#define __HAL_RCC_HSI_CALIBRATIONVALUE_ADJUST(__HSICALIBRATIONVALUE__) (MODIFY_REG(RCC->CR,\
        RCC_CR_HSITRIM, (uint32_t)(__HSICALIBRATIONVALUE__) << RCC_CR_HSITRIM_SHIFT))
/**
  * @}
  */

/** @defgroup RCC_LSI_Configuration LSI Configuration
  * @{
  */

/** @brief  Macros to enable or disable the Internal Low Speed oscillator (LSI).
  * @note   After enabling the LSI, the application software should wait on
  *         LSIRDY flag to be set indicating that LSI clock is stable and can
  *         be used to clock the IWDG and/or the RTC.
  * @note   LSI can not be disabled if the IWDG is running.
  * @note   When the LSI is stopped, LSIRDY flag goes low after 6 LSI oscillator
  *         clock cycles.
  */
#define __HAL_RCC_LSI_ENABLE()  (RCC->CSR |= (RCC_CSR_LSION))
#define __HAL_RCC_LSI_DISABLE() (RCC->CSR &= ~(RCC_CSR_LSION))
/**
  * @}
  */

/** @defgroup RCC_HSE_Configuration HSE Configuration
  * @{
  */
/**
  * @brief  Macro to configure the External High Speed oscillator (HSE).
  * @note   Transitions HSE Bypass to HSE On and HSE On to HSE Bypass are not
  *         supported by this macro. User should request a transition to HSE Off
  *         first and then HSE On or HSE Bypass.
  * @note   After enabling the HSE (RCC_HSE_ON or RCC_HSE_Bypass), the application
  *         software should wait on HSERDY flag to be set indicating that HSE clock
  *         is stable and can be used to clock the PLL and/or system clock.
  * @note   HSE state can not be changed if it is used directly or through the
  *         PLL as system clock. In this case, you have to select another source
  *         of the system clock then change the HSE state (ex. disable it).
  * @note   The HSE is stopped by hardware when entering STOP and STANDBY modes.
  * @note   This function reset the CSSON bit, so if the clock security system(CSS)
  *         was previously enabled you have to enable it again after calling this
  *         function.
  * @param  __STATE__: specifies the new state of the HSE.
  *         This parameter can be one of the following values:
  *            @arg RCC_HSE_OFF: turn OFF the HSE oscillator, HSERDY flag goes low after
  *                              6 HSE oscillator clock cycles.
  *            @arg RCC_HSE_ON: turn ON the HSE oscillator.
  *            @arg RCC_HSE_BYPASS: HSE oscillator bypassed with external clock.
  */
#define __HAL_RCC_HSE_CONFIG(__STATE__)                         \
                    do {                                        \
                      if ((__STATE__) == RCC_HSE_ON)            \
                      {                                         \
                        SET_BIT(RCC->CR, RCC_CR_HSEON);         \
                      }                                         \
                      else if ((__STATE__) == RCC_HSE_OFF)      \
                      {                                         \
                        CLEAR_BIT(RCC->CR, RCC_CR_HSEON);       \
                        CLEAR_BIT(RCC->CR, RCC_CR_HSEBYP);      \
                      }                                         \
                      else if ((__STATE__) == RCC_HSE_BYPASS)   \
                      {                                         \
                        SET_BIT(RCC->CR, RCC_CR_HSEBYP);        \
                        SET_BIT(RCC->CR, RCC_CR_HSEON);         \
                      }                                         \
                      else                                      \
                      {                                         \
                        CLEAR_BIT(RCC->CR, RCC_CR_HSEON);       \
                        CLEAR_BIT(RCC->CR, RCC_CR_HSEBYP);      \
                      }                                         \
                    } while(0)
/**
  * @}
  */

/** @defgroup RCC_LSE_Configuration LSE Configuration
  * @{
  */

/**
  * @brief  Macro to configure the External Low Speed oscillator (LSE).
  * @note   Transitions LSE Bypass to LSE On and LSE On to LSE Bypass are not supported by this macro.
  *         User should request a transition to LSE Off first and then LSE On or LSE Bypass.
  * @note   As the LSE is in the Backup domain and write access is denied to
  *         this domain after reset, you have to enable write access using
  *         HAL_PWR_EnableBkUpAccess() function before to configure the LSE
  *         (to be done once after reset).
  * @note   After enabling the LSE (RCC_LSE_ON or RCC_LSE_BYPASS), the application
  *         software should wait on LSERDY flag to be set indicating that LSE clock
  *         is stable and can be used to clock the RTC.
  * @param  __STATE__: specifies the new state of the LSE.
  *         This parameter can be one of the following values:
  *            @arg RCC_LSE_OFF: turn OFF the LSE oscillator, LSERDY flag goes low after
  *                              6 LSE oscillator clock cycles.
  *            @arg RCC_LSE_ON: turn ON the LSE oscillator.
  *            @arg RCC_LSE_BYPASS: LSE oscillator bypassed with external clock.
  */
#define __HAL_RCC_LSE_CONFIG(__STATE__) \
                    do {                                       \
                      if((__STATE__) == RCC_LSE_ON)            \
                      {                                        \
                        SET_BIT(RCC->BDCR, RCC_BDCR_LSEON);    \
                      }                                        \
                      else if((__STATE__) == RCC_LSE_OFF)      \
                      {                                        \
                        CLEAR_BIT(RCC->BDCR, RCC_BDCR_LSEON);  \
                        CLEAR_BIT(RCC->BDCR, RCC_BDCR_LSEBYP); \
                      }                                        \
                      else if((__STATE__) == RCC_LSE_BYPASS)   \
                      {                                        \
                        SET_BIT(RCC->BDCR, RCC_BDCR_LSEBYP);   \
                        SET_BIT(RCC->BDCR, RCC_BDCR_LSEON);    \
                      }                                        \
                      else                                     \
                      {                                        \
                        CLEAR_BIT(RCC->BDCR, RCC_BDCR_LSEON);  \
                        CLEAR_BIT(RCC->BDCR, RCC_BDCR_LSEBYP); \
                      }                                        \
                    } while(0)
/**
  * @}
  */

/** @defgroup RCC_Internal_RTC_Clock_Configuration RTC Clock Configuration
  * @{
  */

/** @brief  Macros to enable or disable the RTC clock.
  * @note   These macros must be used only after the RTC clock source was selected.
  */
#define __HAL_RCC_RTC_ENABLE()  (RCC->BDCR |= (RCC_BDCR_RTCEN))
#define __HAL_RCC_RTC_DISABLE() (RCC->BDCR &= ~(RCC_BDCR_RTCEN))

/** @brief  Macros to configure the RTC clock (RTCCLK).
  * @note   As the RTC clock configuration bits are in the Backup domain and write
  *         access is denied to this domain after reset, you have to enable write
  *         access using the Power Backup Access macro before to configure
  *         the RTC clock source (to be done once after reset).
  * @note   Once the RTC clock is configured it can't be changed unless the
  *         Backup domain is reset using __HAL_RCC_BackupReset_RELEASE() macro, or by
  *         a Power On Reset (POR).
  * @param  __RTCCLKSource__: specifies the RTC clock source.
  *         This parameter can be one of the following values:
  *            @arg RCC_RTCCLKSOURCE_LSE: LSE selected as RTC clock.
  *            @arg RCC_RTCCLKSOURCE_LSI: LSI selected as RTC clock.
  *            @arg RCC_RTCCLKSOURCE_HSE_DIVx: HSE clock divided by x selected
  *                                            as RTC clock, where x:[2,31]
  * @note   If the LSE or LSI is used as RTC clock source, the RTC continues to
  *         work in STOP and STANDBY modes, and can be used as wakeup source.
  *         However, when the HSE clock is used as RTC clock source, the RTC
  *         cannot be used in STOP and STANDBY modes.
  * @note   The maximum input clock frequency for RTC is 1MHz (when using HSE as
  *         RTC clock source).
  */
#define __HAL_RCC_RTC_CLKPRESCALER(__RTCCLKSource__) (((__RTCCLKSource__) & RCC_BDCR_RTCSEL) == RCC_BDCR_RTCSEL) ?    \
                                                 MODIFY_REG(RCC->CFGR, RCC_CFGR_RTCPRE, ((__RTCCLKSource__) & 0xFFFFCFF)) : CLEAR_BIT(RCC->CFGR, RCC_CFGR_RTCPRE)

#define __HAL_RCC_RTC_CONFIG(__RTCCLKSource__) do { __HAL_RCC_RTC_CLKPRESCALER(__RTCCLKSource__);    \
                                                    RCC->BDCR |= ((__RTCCLKSource__) & 0x00000FFF);  \
                                                   } while (0)

/** @brief  Macros to force or release the Backup domain reset.
  * @note   This function resets the RTC peripheral (including the backup registers)
  *         and the RTC clock source selection in RCC_CSR register.
  * @note   The BKPSRAM is not affected by this reset.
  */
#define __HAL_RCC_BACKUPRESET_FORCE()   (RCC->BDCR |= (RCC_BDCR_BDRST))
#define __HAL_RCC_BACKUPRESET_RELEASE() (RCC->BDCR &= ~(RCC_BDCR_BDRST))
/**
  * @}
  */

/** @defgroup RCC_PLL_Configuration PLL Configuration
  * @{
  */

/** @brief  Macros to enable or disable the main PLL.
  * @note   After enabling the main PLL, the application software should wait on
  *         PLLRDY flag to be set indicating that PLL clock is stable and can
  *         be used as system clock source.
  * @note   The main PLL can not be disabled if it is used as system clock source
  * @note   The main PLL is disabled by hardware when entering STOP and STANDBY modes.
  */
#define __HAL_RCC_PLL_ENABLE() SET_BIT(RCC->CR, RCC_CR_PLLON)
#define __HAL_RCC_PLL_DISABLE() CLEAR_BIT(RCC->CR, RCC_CR_PLLON)

/** @brief  Macro to configure the PLL clock source.
  * @note   This function must be used only when the main PLL is disabled.
  * @param  __PLLSOURCE__: specifies the PLL entry clock source.
  *         This parameter can be one of the following values:
  *            @arg RCC_PLLSOURCE_HSI: HSI oscillator clock selected as PLL clock entry
  *            @arg RCC_PLLSOURCE_HSE: HSE oscillator clock selected as PLL clock entry
  *
  */
#define __HAL_RCC_PLL_PLLSOURCE_CONFIG(__PLLSOURCE__) MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLSRC, (__PLLSOURCE__))

/** @brief  Macro to configure the PLL multiplication factor.
  * @note   This function must be used only when the main PLL is disabled.
  * @param  __PLLM__: specifies the division factor for PLL VCO input clock
  *         This parameter must be a number between Min_Data = 2 and Max_Data = 63.
  * @note   You have to set the PLLM parameter correctly to ensure that the VCO input
  *         frequency ranges from 1 to 2 MHz. It is recommended to select a frequency
  *         of 2 MHz to limit PLL jitter.
  *
  */
#define __HAL_RCC_PLL_PLLM_CONFIG(__PLLM__) MODIFY_REG(RCC->PLLCFGR, RCC_PLLCFGR_PLLM, (__PLLM__))
/**
  * @}
  */

/** @defgroup RCC_PLL_I2S_Configuration PLL I2S Configuration
  * @{
  */

/** @brief  Macro to configure the I2S clock source (I2SCLK).
  * @note   This function must be called before enabling the I2S APB clock.
  * @param  __SOURCE__: specifies the I2S clock source.
  *         This parameter can be one of the following values:
  *            @arg RCC_I2SCLKSOURCE_PLLI2S: PLLI2S clock used as I2S clock source.
  *            @arg RCC_I2SCLKSOURCE_EXT: External clock mapped on the I2S_CKIN pin
  *                                       used as I2S clock source.
  */
#define __HAL_RCC_I2S_CONFIG(__SOURCE__) do {RCC->CFGR &= ~(RCC_CFGR_I2SSRC); \
                                             RCC->CFGR |= (__SOURCE__);       \
                                            }while(0)

/** @brief Macros to enable or disable the PLLI2S.
  * @note  The PLLI2S is disabled by hardware when entering STOP and STANDBY modes.
  */
#define __HAL_RCC_PLLI2S_ENABLE() (RCC->CR |= (RCC_CR_PLLI2SON))
#define __HAL_RCC_PLLI2S_DISABLE() (RCC->CR &= ~(RCC_CR_PLLI2SON))
/**
  * @}
  */

/** @defgroup RCC_Get_Clock_source Get Clock source
  * @{
  */
/**
  * @brief Macro to configure the system clock source.
  * @param __RCC_SYSCLKSOURCE__: specifies the system clock source.
  * This parameter can be one of the following values:
  *              - RCC_SYSCLKSOURCE_HSI: HSI oscillator is used as system clock source.
  *              - RCC_SYSCLKSOURCE_HSE: HSE oscillator is used as system clock source.
  *              - RCC_SYSCLKSOURCE_PLLCLK: PLL output is used as system clock source.
  */
#define __HAL_RCC_SYSCLK_CONFIG(__RCC_SYSCLKSOURCE__) MODIFY_REG(RCC->CFGR, RCC_CFGR_SW, (__RCC_SYSCLKSOURCE__))

/** @brief  Macro to get the clock source used as system clock.
  * @retval The clock source used as system clock. The returned value can be one
  *         of the following:
  *              - RCC_SYSCLKSOURCE_STATUS_HSI: HSI used as system clock.
  *              - RCC_SYSCLKSOURCE_STATUS_HSE: HSE used as system clock.
  *              - RCC_SYSCLKSOURCE_STATUS_PLLCLK: PLL used as system clock.
  */
#define __HAL_RCC_GET_SYSCLK_SOURCE() ((uint32_t)(RCC->CFGR & RCC_CFGR_SWS))

/**
  * @brief  Macro to configures the External Low Speed oscillator (LSE) drive capability.
  * @note   As the LSE is in the Backup domain and write access is denied to
  *         this domain after reset, you have to enable write access using
  *         HAL_PWR_EnableBkUpAccess() function before to configure the LSE
  *         (to be done once after reset).
  * @param  __RCC_LSEDRIVE__: specifies the new state of the LSE drive capability.
  *          This parameter can be one of the following values:
  *            @arg RCC_LSEDRIVE_LOW: LSE oscillator low drive capability.
  *            @arg RCC_LSEDRIVE_MEDIUMLOW: LSE oscillator medium low drive capability.
  *            @arg RCC_LSEDRIVE_MEDIUMHIGH: LSE oscillator medium high drive capability.
  *            @arg RCC_LSEDRIVE_HIGH: LSE oscillator high drive capability.
  * @retval None
  */
#define __HAL_RCC_LSEDRIVE_CONFIG(__RCC_LSEDRIVE__) \
                  (MODIFY_REG(RCC->BDCR, RCC_BDCR_LSEDRV, (uint32_t)(__RCC_LSEDRIVE__) ))

/** @brief  Macro to get the oscillator used as PLL clock source.
  * @retval The oscillator used as PLL clock source. The returned value can be one
  *         of the following:
  *              - RCC_PLLSOURCE_HSI: HSI oscillator is used as PLL clock source.
  *              - RCC_PLLSOURCE_HSE: HSE oscillator is used as PLL clock source.
  */
#define __HAL_RCC_GET_PLL_OSCSOURCE() ((uint32_t)(RCC->PLLCFGR & RCC_PLLCFGR_PLLSRC))
/**
  * @}
  */

/** @defgroup RCCEx_MCOx_Clock_Config RCC Extended MCOx Clock Config
  * @{
  */

/** @brief  Macro to configure the MCO1 clock.
  * @param  __MCOCLKSOURCE__ specifies the MCO clock source.
  *          This parameter can be one of the following values:
  *            @arg RCC_MCO1SOURCE_HSI: HSI clock selected as MCO1 source
  *            @arg RCC_MCO1SOURCE_LSE: LSE clock selected as MCO1 source
  *            @arg RCC_MCO1SOURCE_HSE: HSE clock selected as MCO1 source
  *            @arg RCC_MCO1SOURCE_PLLCLK: main PLL clock selected as MCO1 source
  * @param  __MCODIV__ specifies the MCO clock prescaler.
  *          This parameter can be one of the following values:
  *            @arg RCC_MCODIV_1: no division applied to MCOx clock
  *            @arg RCC_MCODIV_2: division by 2 applied to MCOx clock
  *            @arg RCC_MCODIV_3: division by 3 applied to MCOx clock
  *            @arg RCC_MCODIV_4: division by 4 applied to MCOx clock
  *            @arg RCC_MCODIV_5: division by 5 applied to MCOx clock
  */

#define __HAL_RCC_MCO1_CONFIG(__MCOCLKSOURCE__, __MCODIV__) \
        MODIFY_REG(RCC->CFGR, (RCC_CFGR_MCO1 | RCC_CFGR_MCO1PRE), ((__MCOCLKSOURCE__) | (__MCODIV__)))

/** @brief  Macro to configure the MCO2 clock.
  * @param  __MCOCLKSOURCE__ specifies the MCO clock source.
  *          This parameter can be one of the following values:
  *            @arg RCC_MCO2SOURCE_SYSCLK: System clock (SYSCLK) selected as MCO2 source
  *            @arg RCC_MCO2SOURCE_PLLI2SCLK: PLLI2S clock selected as MCO2 source
  *            @arg RCC_MCO2SOURCE_HSE: HSE clock selected as MCO2 source
  *            @arg RCC_MCO2SOURCE_PLLCLK: main PLL clock selected as MCO2 source
  * @param  __MCODIV__ specifies the MCO clock prescaler.
  *          This parameter can be one of the following values:
  *            @arg RCC_MCODIV_1: no division applied to MCOx clock
  *            @arg RCC_MCODIV_2: division by 2 applied to MCOx clock
  *            @arg RCC_MCODIV_3: division by 3 applied to MCOx clock
  *            @arg RCC_MCODIV_4: division by 4 applied to MCOx clock
  *            @arg RCC_MCODIV_5: division by 5 applied to MCOx clock
  */

#define __HAL_RCC_MCO2_CONFIG(__MCOCLKSOURCE__, __MCODIV__) \
        MODIFY_REG(RCC->CFGR, (RCC_CFGR_MCO2 | RCC_CFGR_MCO2PRE), ((__MCOCLKSOURCE__) | ((__MCODIV__) << 3)));
/**
  * @}
  */

/** @defgroup RCC_Flags_Interrupts_Management Flags Interrupts Management
  * @brief macros to manage the specified RCC Flags and interrupts.
  * @{
  */

/** @brief  Enable RCC interrupt (Perform Byte access to RCC_CIR[14:8] bits to enable
  *         the selected interrupts).
  * @param  __INTERRUPT__: specifies the RCC interrupt sources to be enabled.
  *         This parameter can be any combination of the following values:
  *            @arg RCC_IT_LSIRDY: LSI ready interrupt.
  *            @arg RCC_IT_LSERDY: LSE ready interrupt.
  *            @arg RCC_IT_HSIRDY: HSI ready interrupt.
  *            @arg RCC_IT_HSERDY: HSE ready interrupt.
  *            @arg RCC_IT_PLLRDY: Main PLL ready interrupt.
  *            @arg RCC_IT_PLLI2SRDY: PLLI2S ready interrupt.
  */
#define __HAL_RCC_ENABLE_IT(__INTERRUPT__) (*(__IO uint8_t *) RCC_CIR_BYTE1_ADDRESS |= (__INTERRUPT__))

/** @brief Disable RCC interrupt (Perform Byte access to RCC_CIR[14:8] bits to disable
  *        the selected interrupts).
  * @param  __INTERRUPT__: specifies the RCC interrupt sources to be disabled.
  *         This parameter can be any combination of the following values:
  *            @arg RCC_IT_LSIRDY: LSI ready interrupt.
  *            @arg RCC_IT_LSERDY: LSE ready interrupt.
  *            @arg RCC_IT_HSIRDY: HSI ready interrupt.
  *            @arg RCC_IT_HSERDY: HSE ready interrupt.
  *            @arg RCC_IT_PLLRDY: Main PLL ready interrupt.
  *            @arg RCC_IT_PLLI2SRDY: PLLI2S ready interrupt.
  */
#define __HAL_RCC_DISABLE_IT(__INTERRUPT__) (*(__IO uint8_t *) RCC_CIR_BYTE1_ADDRESS &= (uint8_t)(~(__INTERRUPT__)))

/** @brief  Clear the RCC's interrupt pending bits (Perform Byte access to RCC_CIR[23:16]
  *         bits to clear the selected interrupt pending bits.
  * @param  __INTERRUPT__: specifies the interrupt pending bit to clear.
  *         This parameter can be any combination of the following values:
  *            @arg RCC_IT_LSIRDY: LSI ready interrupt.
  *            @arg RCC_IT_LSERDY: LSE ready interrupt.
  *            @arg RCC_IT_HSIRDY: HSI ready interrupt.
  *            @arg RCC_IT_HSERDY: HSE ready interrupt.
  *            @arg RCC_IT_PLLRDY: Main PLL ready interrupt.
  *            @arg RCC_IT_PLLI2SRDY: PLLI2S ready interrupt.
  *            @arg RCC_IT_CSS: Clock Security System interrupt
  */
#define __HAL_RCC_CLEAR_IT(__INTERRUPT__) (*(__IO uint8_t *) RCC_CIR_BYTE2_ADDRESS = (__INTERRUPT__))

/** @brief  Check the RCC's interrupt has occurred or not.
  * @param  __INTERRUPT__: specifies the RCC interrupt source to check.
  *         This parameter can be one of the following values:
  *            @arg RCC_IT_LSIRDY: LSI ready interrupt.
  *            @arg RCC_IT_LSERDY: LSE ready interrupt.
  *            @arg RCC_IT_HSIRDY: HSI ready interrupt.
  *            @arg RCC_IT_HSERDY: HSE ready interrupt.
  *            @arg RCC_IT_PLLRDY: Main PLL ready interrupt.
  *            @arg RCC_IT_PLLI2SRDY: PLLI2S ready interrupt.
  *            @arg RCC_IT_CSS: Clock Security System interrupt
  * @retval The new state of __INTERRUPT__ (TRUE or FALSE).
  */
#define __HAL_RCC_GET_IT(__INTERRUPT__) ((RCC->CIR & (__INTERRUPT__)) == (__INTERRUPT__))

/** @brief Set RMVF bit to clear the reset flags: RCC_FLAG_PINRST, RCC_FLAG_PORRST,
  *        RCC_FLAG_SFTRST, RCC_FLAG_IWDGRST, RCC_FLAG_WWDGRST and RCC_FLAG_LPWRRST.
  */
#define __HAL_RCC_CLEAR_RESET_FLAGS() (RCC->CSR |= RCC_CSR_RMVF)

/** @brief  Check RCC flag is set or not.
  * @param  __FLAG__: specifies the flag to check.
  *         This parameter can be one of the following values:
  *            @arg RCC_FLAG_HSIRDY: HSI oscillator clock ready.
  *            @arg RCC_FLAG_HSERDY: HSE oscillator clock ready.
  *            @arg RCC_FLAG_PLLRDY: Main PLL clock ready.
  *            @arg RCC_FLAG_PLLI2SRDY: PLLI2S clock ready.
  *            @arg RCC_FLAG_LSERDY: LSE oscillator clock ready.
  *            @arg RCC_FLAG_LSIRDY: LSI oscillator clock ready.
  *            @arg RCC_FLAG_BORRST: POR/PDR or BOR reset.
  *            @arg RCC_FLAG_PINRST: Pin reset.
  *            @arg RCC_FLAG_PORRST: POR/PDR reset.
  *            @arg RCC_FLAG_SFTRST: Software reset.
  *            @arg RCC_FLAG_IWDGRST: Independent Watchdog reset.
  *            @arg RCC_FLAG_WWDGRST: Window Watchdog reset.
  *            @arg RCC_FLAG_LPWRRST: Low Power reset.
  * @retval The new state of __FLAG__ (TRUE or FALSE).
  */
#define RCC_FLAG_MASK  ((uint8_t)0x1F)
#define __HAL_RCC_GET_FLAG(__FLAG__) (((((((__FLAG__) >> 5) == 1)? RCC->CR :((((__FLAG__) >> 5) == 2) ? RCC->BDCR :((((__FLAG__) >> 5) == 3)? RCC->CSR :RCC->CIR))) & ((uint32_t)1 << ((__FLAG__) & RCC_FLAG_MASK)))!= 0)? 1 : 0)

/** @defgroup RCC_LSEDrive_Configuration RCC LSE Drive configurations
  * @{
  */
#define RCC_LSEDRIVE_LOW                 ((uint32_t)0x00000000U)
#define RCC_LSEDRIVE_MEDIUMLOW           RCC_BDCR_LSEDRV_1
#define RCC_LSEDRIVE_MEDIUMHIGH          RCC_BDCR_LSEDRV_0
#define RCC_LSEDRIVE_HIGH                RCC_BDCR_LSEDRV

#if !defined  (HSE_VALUE)
  #define HSE_VALUE    ((uint32_t)16000000U) /*!< Value of the External oscillator in Hz */
#endif /* HSE_VALUE */

#if !defined  (HSI_VALUE)
  #define HSI_VALUE    ((uint32_t)16000000U) /*!< Value of the Internal oscillator in Hz*/
#endif /* HSI_VALUE */

#if !defined  (HSE_STARTUP_TIMEOUT)
  #define HSE_STARTUP_TIMEOUT    ((uint32_t)100U)   /*!< Time out for HSE start up, in ms */
#endif /* HSE_STARTUP_TIMEOUT */

#if !defined  (LSI_VALUE)
 #define LSI_VALUE  ((uint32_t)32000U)       /*!< LSI Typical Value in Hz*/
#endif /* LSI_VALUE */                      /*!< Value of the Internal Low Speed oscillator in Hz
                                             The real value may vary depending on the variations
                                             in voltage and temperature.  */

#if !defined  (LSE_VALUE)
 #define LSE_VALUE  ((uint32_t)32768U)    /*!< Value of the External Low Speed oscillator in Hz */
#endif /* LSE_VALUE */

#if !defined  (LSE_STARTUP_TIMEOUT)
  #define LSE_STARTUP_TIMEOUT    ((uint32_t)5000U)   /*!< Time out for LSE start up, in ms */
#endif /* LSE_STARTUP_TIMEOUT */

/*!< Uncomment the following line if you need to relocate your vector Table in
     Internal SRAM. */
/* #define VECT_TAB_SRAM */
#define VECT_TAB_OFFSET  0x00 /*!< Vector Table base offset field.
                                   This value must be a multiple of 0x200. */

#define HSE_TIMEOUT_VALUE          HSE_STARTUP_TIMEOUT
#define HSI_TIMEOUT_VALUE          ((uint32_t)2)  /* 2 ms */
#define LSI_TIMEOUT_VALUE          ((uint32_t)2)  /* 2 ms */
#define PLL_TIMEOUT_VALUE          ((uint32_t)2)  /* 2 ms */
#define CLOCKSWITCH_TIMEOUT_VALUE  ((uint32_t)5000) /* 5 s    */

#define RCC_DBP_TIMEOUT_VALUE      ((uint32_t)100)
#define RCC_LSE_TIMEOUT_VALUE      LSE_STARTUP_TIMEOUT

#include <libopencm3/stm32/f7/HAL_F7.h>
#include <libopencm3/stm32/f7/rcc_ex.h>
#include <libopencm3/stm32/f7/tick.h>

BEGIN_DECLS
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef  *RCC_OscInitStruct);
HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef  *RCC_ClkInitStruct, uint32_t FLatency);
uint32_t HAL_RCC_GetSysClockFreq(void);
END_DECLS

#endif
