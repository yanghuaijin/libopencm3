/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2010 Piotr Esden-Tempski <piotr@esden.net>
 * Copyright (C) 2012 Michael Ossmann <mike@ossmann.com>
 * Copyright (C) 2012 Benjamin Vernoux <titanmkd@gmail.com>
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
/** @defgroup CM3_nvic_defines NVIC Defines
 *
 * @brief <b>libopencm3 Cortex Nested Vectored Interrupt Controller</b>
 *
 * @ingroup CM3_defines
 *
 * @version 1.0.0
 *
 * @author @htmlonly &copy; @endhtmlonly 2010 Piotr Esden-Tempski <piotr@esden.net>
 *
 * @date 18 August 2012
 *
 * LGPL License Terms @ref lgpl_license
 */
/**@{*/

#ifndef LIBOPENCM3_NVIC_H
#define LIBOPENCM3_NVIC_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/cm3/memorymap.h>

/* --- NVIC Registers ------------------------------------------------------ */

/* ISER: Interrupt Set Enable Registers */
/* Note: 8 32bit Registers */
/* Note: Single register on CM0 */
#define NVIC_ISER(iser_id)		MMIO32(NVIC_BASE + 0x00 + \
						((iser_id) * 4))

/* NVIC_BASE + 0x020 (0xE000 E120 - 0xE000 E17F): Reserved */

/* ICER: Interrupt Clear Enable Registers */
/* Note: 8 32bit Registers */
/* Note: Single register on CM0 */
#define NVIC_ICER(icer_id)		MMIO32(NVIC_BASE + 0x80 + \
						((icer_id) * 4))

/* NVIC_BASE + 0x0A0 (0xE000 E1A0 - 0xE000 E1FF): Reserved */

/* ISPR: Interrupt Set Pending Registers */
/* Note: 8 32bit Registers */
/* Note: Single register on CM0 */
#define NVIC_ISPR(ispr_id)		MMIO32(NVIC_BASE + 0x100 + \
						((ispr_id) * 4))

/* NVIC_BASE + 0x120 (0xE000 E220 - 0xE000 E27F): Reserved */

/* ICPR: Interrupt Clear Pending Registers */
/* Note: 8 32bit Registers */
/* Note: Single register on CM0 */
#define NVIC_ICPR(icpr_id)		MMIO32(NVIC_BASE + 0x180 + \
						((icpr_id) * 4))

/* NVIC_BASE + 0x1A0 (0xE000 E2A0 - 0xE00 E2FF): Reserved */

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
/* IABR: Interrupt Active Bit Register */
/* Note: 8 32bit Registers */
#define NVIC_IABR(iabr_id)		MMIO32(NVIC_BASE + 0x200 + \
						((iabr_id) * 4))
#endif

/* NVIC_BASE + 0x220 (0xE000 E320 - 0xE000 E3FF): Reserved */

/* IPR: Interrupt Priority Registers */
/* Note: 240 8bit Registers */
/* Note: 32 8bit Registers on CM0 */
#define NVIC_IPR(ipr_id)		MMIO8(NVIC_BASE + 0x300 + \
						(ipr_id))

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
/* STIR: Software Trigger Interrupt Register */
#define NVIC_STIR			MMIO32(STIR_BASE)
#endif

/* --- IRQ channel numbers-------------------------------------------------- */

/* Cortex M0, M3 and M4 System Interrupts */
/** @defgroup nvic_sysint Cortex M0/M3/M4 System Interrupts
@ingroup CM3_nvic_defines

IRQ numbers -3 and -6 to -9 are reserved
@{*/
#define NVIC_NMI_IRQ			-14
#define NVIC_HARD_FAULT_IRQ		-13

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
#define NVIC_MEM_MANAGE_IRQ		-12
#define NVIC_BUS_FAULT_IRQ		-11
#define NVIC_USAGE_FAULT_IRQ		-10
#endif

/* irq numbers -6 to -9 are reserved */
#define NVIC_SV_CALL_IRQ		-5

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
#define DEBUG_MONITOR_IRQ		-4
#endif

/* irq number -3 reserved */
#define NVIC_PENDSV_IRQ			-2
#define NVIC_SYSTICK_IRQ		-1
/**@}*/

/**
 * @brief STM32F7xx Interrupt Number Definition, according to the selected device
 *        in @ref Library_configuration_section
 */
typedef enum
{
/******  Cortex-M7 Processor Exceptions Numbers ****************************************************************/
  NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */
  MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M7 Memory Management Interrupt                           */
  BusFault_IRQn               = -11,    /*!< 5 Cortex-M7 Bus Fault Interrupt                                   */
  UsageFault_IRQn             = -10,    /*!< 6 Cortex-M7 Usage Fault Interrupt                                 */
  SVCall_IRQn                 = -5,     /*!< 11 Cortex-M7 SV Call Interrupt                                    */
  DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M7 Debug Monitor Interrupt                              */
  PendSV_IRQn                 = -2,     /*!< 14 Cortex-M7 Pend SV Interrupt                                    */
  SysTick_IRQn                = -1,     /*!< 15 Cortex-M7 System Tick Interrupt                                */
/******  STM32 specific Interrupt Numbers **********************************************************************/
  WWDG_IRQn                   = 0,      /*!< Window WatchDog Interrupt                                         */
  PVD_IRQn                    = 1,      /*!< PVD through EXTI Line detection Interrupt                         */
  TAMP_STAMP_IRQn             = 2,      /*!< Tamper and TimeStamp interrupts through the EXTI line             */
  RTC_WKUP_IRQn               = 3,      /*!< RTC Wakeup interrupt through the EXTI line                        */
  FLASH_IRQn                  = 4,      /*!< FLASH global Interrupt                                            */
  RCC_IRQn                    = 5,      /*!< RCC global Interrupt                                              */
  EXTI0_IRQn                  = 6,      /*!< EXTI Line0 Interrupt                                              */
  EXTI1_IRQn                  = 7,      /*!< EXTI Line1 Interrupt                                              */
  EXTI2_IRQn                  = 8,      /*!< EXTI Line2 Interrupt                                              */
  EXTI3_IRQn                  = 9,      /*!< EXTI Line3 Interrupt                                              */
  EXTI4_IRQn                  = 10,     /*!< EXTI Line4 Interrupt                                              */
  DMA1_Stream0_IRQn           = 11,     /*!< DMA1 Stream 0 global Interrupt                                    */
  DMA1_Stream1_IRQn           = 12,     /*!< DMA1 Stream 1 global Interrupt                                    */
  DMA1_Stream2_IRQn           = 13,     /*!< DMA1 Stream 2 global Interrupt                                    */
  DMA1_Stream3_IRQn           = 14,     /*!< DMA1 Stream 3 global Interrupt                                    */
  DMA1_Stream4_IRQn           = 15,     /*!< DMA1 Stream 4 global Interrupt                                    */
  DMA1_Stream5_IRQn           = 16,     /*!< DMA1 Stream 5 global Interrupt                                    */
  DMA1_Stream6_IRQn           = 17,     /*!< DMA1 Stream 6 global Interrupt                                    */
  ADC_IRQn                    = 18,     /*!< ADC1, ADC2 and ADC3 global Interrupts                             */
  CAN1_TX_IRQn                = 19,     /*!< CAN1 TX Interrupt                                                 */
  CAN1_RX0_IRQn               = 20,     /*!< CAN1 RX0 Interrupt                                                */
  CAN1_RX1_IRQn               = 21,     /*!< CAN1 RX1 Interrupt                                                */
  CAN1_SCE_IRQn               = 22,     /*!< CAN1 SCE Interrupt                                                */
  EXTI9_5_IRQn                = 23,     /*!< External Line[9:5] Interrupts                                     */
  TIM1_BRK_TIM9_IRQn          = 24,     /*!< TIM1 Break interrupt and TIM9 global interrupt                    */
  TIM1_UP_TIM10_IRQn          = 25,     /*!< TIM1 Update Interrupt and TIM10 global interrupt                  */
  TIM1_TRG_COM_TIM11_IRQn     = 26,     /*!< TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt */
  TIM1_CC_IRQn                = 27,     /*!< TIM1 Capture Compare Interrupt                                    */
  TIM2_IRQn                   = 28,     /*!< TIM2 global Interrupt                                             */
  TIM3_IRQn                   = 29,     /*!< TIM3 global Interrupt                                             */
  TIM4_IRQn                   = 30,     /*!< TIM4 global Interrupt                                             */
  I2C1_EV_IRQn                = 31,     /*!< I2C1 Event Interrupt                                              */
  I2C1_ER_IRQn                = 32,     /*!< I2C1 Error Interrupt                                              */
  I2C2_EV_IRQn                = 33,     /*!< I2C2 Event Interrupt                                              */
  I2C2_ER_IRQn                = 34,     /*!< I2C2 Error Interrupt                                              */
  SPI1_IRQn                   = 35,     /*!< SPI1 global Interrupt                                             */
  SPI2_IRQn                   = 36,     /*!< SPI2 global Interrupt                                             */
  USART1_IRQn                 = 37,     /*!< USART1 global Interrupt                                           */
  USART2_IRQn                 = 38,     /*!< USART2 global Interrupt                                           */
  USART3_IRQn                 = 39,     /*!< USART3 global Interrupt                                           */
  EXTI15_10_IRQn              = 40,     /*!< External Line[15:10] Interrupts                                   */
  RTC_Alarm_IRQn              = 41,     /*!< RTC Alarm (A and B) through EXTI Line Interrupt                   */
  OTG_FS_WKUP_IRQn            = 42,     /*!< USB OTG FS Wakeup through EXTI line interrupt                     */
  TIM8_BRK_TIM12_IRQn         = 43,     /*!< TIM8 Break Interrupt and TIM12 global interrupt                   */
  TIM8_UP_TIM13_IRQn          = 44,     /*!< TIM8 Update Interrupt and TIM13 global interrupt                  */
  TIM8_TRG_COM_TIM14_IRQn     = 45,     /*!< TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt */
  TIM8_CC_IRQn                = 46,     /*!< TIM8 Capture Compare Interrupt                                    */
  DMA1_Stream7_IRQn           = 47,     /*!< DMA1 Stream7 Interrupt                                            */
  FMC_IRQn                    = 48,     /*!< FMC global Interrupt                                              */
  SDMMC1_IRQn                 = 49,     /*!< SDMMC1 global Interrupt                                           */
  TIM5_IRQn                   = 50,     /*!< TIM5 global Interrupt                                             */
  SPI3_IRQn                   = 51,     /*!< SPI3 global Interrupt                                             */
  UART4_IRQn                  = 52,     /*!< UART4 global Interrupt                                            */
  UART5_IRQn                  = 53,     /*!< UART5 global Interrupt                                            */
  TIM6_DAC_IRQn               = 54,     /*!< TIM6 global and DAC1&2 underrun error  interrupts                 */
  TIM7_IRQn                   = 55,     /*!< TIM7 global interrupt                                             */
  DMA2_Stream0_IRQn           = 56,     /*!< DMA2 Stream 0 global Interrupt                                    */
  DMA2_Stream1_IRQn           = 57,     /*!< DMA2 Stream 1 global Interrupt                                    */
  DMA2_Stream2_IRQn           = 58,     /*!< DMA2 Stream 2 global Interrupt                                    */
  DMA2_Stream3_IRQn           = 59,     /*!< DMA2 Stream 3 global Interrupt                                    */
  DMA2_Stream4_IRQn           = 60,     /*!< DMA2 Stream 4 global Interrupt                                    */
  ETH_IRQn                    = 61,     /*!< Ethernet global Interrupt                                         */
  ETH_WKUP_IRQn               = 62,     /*!< Ethernet Wakeup through EXTI line Interrupt                       */
  CAN2_TX_IRQn                = 63,     /*!< CAN2 TX Interrupt                                                 */
  CAN2_RX0_IRQn               = 64,     /*!< CAN2 RX0 Interrupt                                                */
  CAN2_RX1_IRQn               = 65,     /*!< CAN2 RX1 Interrupt                                                */
  CAN2_SCE_IRQn               = 66,     /*!< CAN2 SCE Interrupt                                                */
  OTG_FS_IRQn                 = 67,     /*!< USB OTG FS global Interrupt                                       */
  DMA2_Stream5_IRQn           = 68,     /*!< DMA2 Stream 5 global interrupt                                    */
  DMA2_Stream6_IRQn           = 69,     /*!< DMA2 Stream 6 global interrupt                                    */
  DMA2_Stream7_IRQn           = 70,     /*!< DMA2 Stream 7 global interrupt                                    */
  USART6_IRQn                 = 71,     /*!< USART6 global interrupt                                           */
  I2C3_EV_IRQn                = 72,     /*!< I2C3 event interrupt                                              */
  I2C3_ER_IRQn                = 73,     /*!< I2C3 error interrupt                                              */
  OTG_HS_EP1_OUT_IRQn         = 74,     /*!< USB OTG HS End Point 1 Out global interrupt                       */
  OTG_HS_EP1_IN_IRQn          = 75,     /*!< USB OTG HS End Point 1 In global interrupt                        */
  OTG_HS_WKUP_IRQn            = 76,     /*!< USB OTG HS Wakeup through EXTI interrupt                          */
  OTG_HS_IRQn                 = 77,     /*!< USB OTG HS global interrupt                                       */
  DCMI_IRQn                   = 78,     /*!< DCMI global interrupt                                             */
  RNG_IRQn                    = 80,     /*!< RNG global interrupt                                              */
  FPU_IRQn                    = 81,     /*!< FPU global interrupt                                              */
  UART7_IRQn                  = 82,     /*!< UART7 global interrupt                                            */
  UART8_IRQn                  = 83,     /*!< UART8 global interrupt                                            */
  SPI4_IRQn                   = 84,     /*!< SPI4 global Interrupt                                             */
  SPI5_IRQn                   = 85,     /*!< SPI5 global Interrupt                                             */
  SPI6_IRQn                   = 86,     /*!< SPI6 global Interrupt                                             */
  SAI1_IRQn                   = 87,     /*!< SAI1 global Interrupt                                             */
  DMA2D_IRQn                  = 90,     /*!< DMA2D global Interrupt                                            */
  SAI2_IRQn                   = 91,     /*!< SAI2 global Interrupt                                             */
  QUADSPI_IRQn                = 92,     /*!< Quad SPI global interrupt                                         */
  LPTIM1_IRQn                 = 93,     /*!< LP TIM1 interrupt                                                 */
  CEC_IRQn                    = 94,     /*!< HDMI-CEC global Interrupt                                         */
  I2C4_EV_IRQn                = 95,     /*!< I2C4 Event Interrupt                                              */
  I2C4_ER_IRQn                = 96,     /*!< I2C4 Error Interrupt                                              */
  SPDIF_RX_IRQn               = 97,     /*!< SPDIF-RX global Interrupt                                         */
  DFSDM1_FLT0_IRQn	          = 99,     /*!< DFSDM1 Filter 0 global Interrupt                                  */
  DFSDM1_FLT1_IRQn	          = 100,    /*!< DFSDM1 Filter 1 global Interrupt                                  */
  DFSDM1_FLT2_IRQn	          = 101,    /*!< DFSDM1 Filter 2 global Interrupt                                  */
  DFSDM1_FLT3_IRQn	          = 102,    /*!< DFSDM1 Filter 3 global Interrupt                                  */
  SDMMC2_IRQn                 = 103,    /*!< SDMMC2 global Interrupt                                           */
  CAN3_TX_IRQn                = 104,    /*!< CAN3 TX Interrupt                                                 */
  CAN3_RX0_IRQn               = 105,    /*!< CAN3 RX0 Interrupt                                                */
  CAN3_RX1_IRQn               = 106,    /*!< CAN3 RX1 Interrupt                                                */
  CAN3_SCE_IRQn               = 107,    /*!< CAN3 SCE Interrupt                                                */
  MDIOS_IRQn                  = 109     /*!< MDIO Slave global Interrupt                                       */
} IRQn_Type;

/* Note: User interrupts are family specific and are defined in a family
 * specific header file in the corresponding subfolder.
 */

#include <libopencm3/dispatch/nvic.h>

/* --- NVIC functions ------------------------------------------------------ */

BEGIN_DECLS

void nvic_enable_irq(uint8_t irqn);
void nvic_disable_irq(uint8_t irqn);
uint8_t nvic_get_pending_irq(uint8_t irqn);
void nvic_set_pending_irq(uint8_t irqn);
void nvic_clear_pending_irq(uint8_t irqn);
uint8_t nvic_get_irq_enabled(uint8_t irqn);
void nvic_set_priority(uint8_t irqn, uint8_t priority);

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
uint8_t nvic_get_active_irq(uint8_t irqn);
void nvic_generate_software_interrupt(uint16_t irqn);
#endif

void reset_handler(void);
void nmi_handler(void);
void hard_fault_handler(void);
void sv_call_handler(void);
void pend_sv_handler(void);
void sys_tick_handler(void);

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
void mem_manage_handler(void);
void bus_fault_handler(void);
void usage_fault_handler(void);
void debug_monitor_handler(void);
#endif

END_DECLS

/**@}*/

#endif
