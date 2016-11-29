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

#ifndef LIBOPENCM3_MEMORYMAP_H
#define LIBOPENCM3_MEMORYMAP_H

#include <libopencm3/cm3/memorymap.h>

/* --- STM32F7 specific peripheral definitions ----------------------------- */

/* Memory map for all busses */
#define RAMDTCM_BASE           0x20000000U /*!< Base address of : 128KB system data RAM accessible over DTCM                            */
#define PERIPH_BASE            0x40000000U /*!< Base address of : AHB/ABP Peripherals                                                   */
#define BKPSRAM_BASE           0x40024000U /*!< Base address of : Backup SRAM(4 KB)                                                     */
#define QSPI_BASE              0x90000000U /*!< Base address of : QSPI memories  accessible over AXI                                    */
#define FMC_R_BASE             0xA0000000U /*!< Base address of : FMC Control registers                                                 */
#define QSPI_R_BASE            0xA0001000U /*!< Base address of : QSPI Control  registers                                               */
#define SRAM1_BASE             0x20020000U /*!< Base address of : 368KB RAM1 accessible over AXI/AHB                                    */
#define SRAM2_BASE             0x2007C000U /*!< Base address of : 16KB RAM2 accessible over AXI/AHB                                     */
#define FLASH_END              0x081FFFFFU /*!< FLASH end address */

#define PERIPH_BASE_APB1		(PERIPH_BASE + 0x00000)
#define PERIPH_BASE_APB2		(PERIPH_BASE + 0x00020000U)
#define PERIPH_BASE_AHB1		(PERIPH_BASE + 0x00020000U)
#define PERIPH_BASE_AHB2		(PERIPH_BASE + 0x10000000U)

/* Register boundary addresses */

#define APB1PERIPH_BASE PERIPH_BASE_APB1
#define APB2PERIPH_BASE PERIPH_BASE_APB2
#define AHB1PERIPH_BASE PERIPH_BASE_AHB1
#define AHB2PERIPH_BASE PERIPH_BASE_AHB2

/*!< APB1 peripherals */
#define TIM2_BASE             (APB1PERIPH_BASE + 0x0000U)
#define TIM3_BASE             (APB1PERIPH_BASE + 0x0400U)
#define TIM4_BASE             (APB1PERIPH_BASE + 0x0800U)
#define TIM5_BASE             (APB1PERIPH_BASE + 0x0C00U)
#define TIM6_BASE             (APB1PERIPH_BASE + 0x1000U)
#define TIM7_BASE             (APB1PERIPH_BASE + 0x1400U)
#define TIM12_BASE            (APB1PERIPH_BASE + 0x1800U)
#define TIM13_BASE            (APB1PERIPH_BASE + 0x1C00U)
#define TIM14_BASE            (APB1PERIPH_BASE + 0x2000U)
#define LPTIM1_BASE           (APB1PERIPH_BASE + 0x2400U)
#define RTC_BASE              (APB1PERIPH_BASE + 0x2800U)
#define WWDG_BASE             (APB1PERIPH_BASE + 0x2C00U)
#define IWDG_BASE             (APB1PERIPH_BASE + 0x3000U)
#define CAN3_BASE             (APB1PERIPH_BASE + 0x3400U)
#define SPI2_BASE             (APB1PERIPH_BASE + 0x3800U)
#define SPI3_BASE             (APB1PERIPH_BASE + 0x3C00U)
#define SPDIFRX_BASE          (APB1PERIPH_BASE + 0x4000U)
#define USART2_BASE           (APB1PERIPH_BASE + 0x4400U)
#define USART3_BASE           (APB1PERIPH_BASE + 0x4800U)
#define UART4_BASE            (APB1PERIPH_BASE + 0x4C00U)
#define UART5_BASE            (APB1PERIPH_BASE + 0x5000U)
#define I2C1_BASE             (APB1PERIPH_BASE + 0x5400U)
#define I2C2_BASE             (APB1PERIPH_BASE + 0x5800U)
#define I2C3_BASE             (APB1PERIPH_BASE + 0x5C00U)
#define I2C4_BASE             (APB1PERIPH_BASE + 0x6000U)
#define CAN1_BASE             (APB1PERIPH_BASE + 0x6400U)
#define CAN2_BASE             (APB1PERIPH_BASE + 0x6800U)
#define CEC_BASE              (APB1PERIPH_BASE + 0x6C00U)
#define PWR_BASE              (APB1PERIPH_BASE + 0x7000U)
#define DAC_BASE              (APB1PERIPH_BASE + 0x7400U)
#define UART7_BASE            (APB1PERIPH_BASE + 0x7800U)
#define UART8_BASE            (APB1PERIPH_BASE + 0x7C00U)

/*!< APB2 peripherals */
#define TIM1_BASE             (APB2PERIPH_BASE + 0x0000U)
#define TIM8_BASE             (APB2PERIPH_BASE + 0x0400U)
#define USART1_BASE           (APB2PERIPH_BASE + 0x1000U)
#define USART6_BASE           (APB2PERIPH_BASE + 0x1400U)
#define SDMMC2_BASE           (APB2PERIPH_BASE + 0x1C00U)
#define ADC1_BASE             (APB2PERIPH_BASE + 0x2000U)
#define ADC2_BASE             (APB2PERIPH_BASE + 0x2100U)
#define ADC3_BASE             (APB2PERIPH_BASE + 0x2200U)
#define ADC_BASE              (APB2PERIPH_BASE + 0x2300U)
#define SDMMC1_BASE           (APB2PERIPH_BASE + 0x2C00U)
#define SPI1_BASE             (APB2PERIPH_BASE + 0x3000U)
#define SPI4_BASE             (APB2PERIPH_BASE + 0x3400U)
#define SYSCFG_BASE           (APB2PERIPH_BASE + 0x3800U)
#define EXTI_BASE             (APB2PERIPH_BASE + 0x3C00U)
#define TIM9_BASE             (APB2PERIPH_BASE + 0x4000U)
#define TIM10_BASE            (APB2PERIPH_BASE + 0x4400U)
#define TIM11_BASE            (APB2PERIPH_BASE + 0x4800U)
#define SPI5_BASE             (APB2PERIPH_BASE + 0x5000U)
#define SPI6_BASE             (APB2PERIPH_BASE + 0x5400U)
#define SAI1_BASE             (APB2PERIPH_BASE + 0x5800U)
#define SAI2_BASE             (APB2PERIPH_BASE + 0x5C00U)
#define SAI1_Block_A_BASE     (SAI1_BASE + 0x004U)
#define SAI1_Block_B_BASE     (SAI1_BASE + 0x024U)
#define SAI2_Block_A_BASE     (SAI2_BASE + 0x004U)
#define SAI2_Block_B_BASE     (SAI2_BASE + 0x024U)
#define DFSDM1_BASE           (APB2PERIPH_BASE + 0x7400U)
#define DFSDM1_Channel0_BASE  (DFSDM1_BASE + 0x00U)
#define DFSDM1_Channel1_BASE  (DFSDM1_BASE + 0x20U)
#define DFSDM1_Channel2_BASE  (DFSDM1_BASE + 0x40U)
#define DFSDM1_Channel3_BASE  (DFSDM1_BASE + 0x60U)
#define DFSDM1_Channel4_BASE  (DFSDM1_BASE + 0x80U)
#define DFSDM1_Channel5_BASE  (DFSDM1_BASE + 0xA0U)
#define DFSDM1_Channel6_BASE  (DFSDM1_BASE + 0xC0U)
#define DFSDM1_Channel7_BASE  (DFSDM1_BASE + 0xE0U)
#define DFSDM1_Filter0_BASE   (DFSDM1_BASE + 0x100U)
#define DFSDM1_Filter1_BASE   (DFSDM1_BASE + 0x180U)
#define DFSDM1_Filter2_BASE   (DFSDM1_BASE + 0x200U)
#define DFSDM1_Filter3_BASE   (DFSDM1_BASE + 0x280U)
#define MDIOS_BASE            (APB2PERIPH_BASE + 0x7800U)
/*!< AHB1 peripherals */
#define GPIOA_BASE            (AHB1PERIPH_BASE + 0x0000U)
#define GPIOB_BASE            (AHB1PERIPH_BASE + 0x0400U)
#define GPIOC_BASE            (AHB1PERIPH_BASE + 0x0800U)
#define GPIOD_BASE            (AHB1PERIPH_BASE + 0x0C00U)
#define GPIOE_BASE            (AHB1PERIPH_BASE + 0x1000U)
#define GPIOF_BASE            (AHB1PERIPH_BASE + 0x1400U)
#define GPIOG_BASE            (AHB1PERIPH_BASE + 0x1800U)
#define GPIOH_BASE            (AHB1PERIPH_BASE + 0x1C00U)
#define GPIOI_BASE            (AHB1PERIPH_BASE + 0x2000U)
#define GPIOJ_BASE            (AHB1PERIPH_BASE + 0x2400U)
#define GPIOK_BASE            (AHB1PERIPH_BASE + 0x2800U)
#define CRC_BASE              (AHB1PERIPH_BASE + 0x3000U)
#define RCC_BASE              (AHB1PERIPH_BASE + 0x3800U)
#define FLASH_R_BASE          (AHB1PERIPH_BASE + 0x3C00U)
#define UID_BASE              0x1FF0F420U                   /*!< Unique device ID register base address */
#define FLASHSIZE_BASE        0x1FF0F442U                   /*!< FLASH Size register base address */
#define PACKAGESIZE_BASE      0x1FFF7BF0U                   /*!< Package size register base address */
#define DMA1_BASE             (AHB1PERIPH_BASE + 0x6000U)
#define DMA1_Stream0_BASE     (DMA1_BASE + 0x010U)
#define DMA1_Stream1_BASE     (DMA1_BASE + 0x028U)
#define DMA1_Stream2_BASE     (DMA1_BASE + 0x040U)
#define DMA1_Stream3_BASE     (DMA1_BASE + 0x058U)
#define DMA1_Stream4_BASE     (DMA1_BASE + 0x070U)
#define DMA1_Stream5_BASE     (DMA1_BASE + 0x088U)
#define DMA1_Stream6_BASE     (DMA1_BASE + 0x0A0U)
#define DMA1_Stream7_BASE     (DMA1_BASE + 0x0B8U)
#define DMA2_BASE             (AHB1PERIPH_BASE + 0x6400U)
#define DMA2_Stream0_BASE     (DMA2_BASE + 0x010U)
#define DMA2_Stream1_BASE     (DMA2_BASE + 0x028U)
#define DMA2_Stream2_BASE     (DMA2_BASE + 0x040U)
#define DMA2_Stream3_BASE     (DMA2_BASE + 0x058U)
#define DMA2_Stream4_BASE     (DMA2_BASE + 0x070U)
#define DMA2_Stream5_BASE     (DMA2_BASE + 0x088U)
#define DMA2_Stream6_BASE     (DMA2_BASE + 0x0A0U)
#define DMA2_Stream7_BASE     (DMA2_BASE + 0x0B8U)
#define ETH_BASE              (AHB1PERIPH_BASE + 0x8000U)
#define ETH_MAC_BASE          (ETH_BASE)
#define ETH_MMC_BASE          (ETH_BASE + 0x0100U)
#define ETH_PTP_BASE          (ETH_BASE + 0x0700U)
#define ETH_DMA_BASE          (ETH_BASE + 0x1000U)
#define DMA2D_BASE            (AHB1PERIPH_BASE + 0xB000U)
/*!< AHB2 peripherals */
#define DCMI_BASE             (AHB2PERIPH_BASE + 0x50000U)
#define RNG_BASE              (AHB2PERIPH_BASE + 0x60800U)
/*!< FMC Bankx registers base address */
#define FMC_Bank1_R_BASE      (FMC_R_BASE + 0x0000U)
#define FMC_Bank1E_R_BASE     (FMC_R_BASE + 0x0104U)
#define FMC_Bank3_R_BASE      (FMC_R_BASE + 0x0080U)
#define FMC_Bank5_6_R_BASE    (FMC_R_BASE + 0x0140U)

/* Debug MCU registers base address */
#define DBGMCU_BASE           0xE0042000U

/*!< USB registers base address */
#define USB_OTG_HS_PERIPH_BASE               0x40040000U
#define USB_OTG_FS_PERIPH_BASE               0x50000000U

#define USB_OTG_GLOBAL_BASE                  0x000U
#define USB_OTG_DEVICE_BASE                  0x800U
#define USB_OTG_IN_ENDPOINT_BASE             0x900U
#define USB_OTG_OUT_ENDPOINT_BASE            0xB00U
#define USB_OTG_EP_REG_SIZE                  0x20U
#define USB_OTG_HOST_BASE                    0x400U
#define USB_OTG_HOST_PORT_BASE               0x440U
#define USB_OTG_HOST_CHANNEL_BASE            0x500U
#define USB_OTG_HOST_CHANNEL_SIZE            0x20U
#define USB_OTG_PCGCCTL_BASE                 0xE00U
#define USB_OTG_FIFO_BASE                    0x1000U
#define USB_OTG_FIFO_SIZE                    0x1000U

/* rename to support libopencm3 */
#define POWER_CONTROL_BASE					PWR_BASE
#define FLASH_MEM_INTERFACE_BASE			FLASH_R_BASE
#define USB_OTG_FS_BASE						USB_OTG_FS_PERIPH_BASE
#define USB_OTG_HS_BASE						USB_OTG_HS_PERIPH_BASE

#define GPIO_PORT_A_BASE					GPIOA_BASE
#define GPIO_PORT_B_BASE					GPIOB_BASE
#define GPIO_PORT_C_BASE					GPIOC_BASE
#define GPIO_PORT_D_BASE					GPIOD_BASE
#define GPIO_PORT_E_BASE					GPIOE_BASE
#define GPIO_PORT_F_BASE					GPIOF_BASE
#define GPIO_PORT_G_BASE					GPIOG_BASE
#define GPIO_PORT_H_BASE					GPIOH_BASE
#define GPIO_PORT_I_BASE					GPIOI_BASE
#define GPIO_PORT_J_BASE					GPIOJ_BASE
#define GPIO_PORT_K_BASE					GPIOK_BASE

///* APB1 peripherals */
//#define TIM2_BASE			(PERIPH_BASE_APB1 + 0x0000U)
//#define TIM3_BASE			(PERIPH_BASE_APB1 + 0x0400U)
//#define TIM4_BASE			(PERIPH_BASE_APB1 + 0x0800U)
//#define TIM5_BASE			(PERIPH_BASE_APB1 + 0x0C00U)
//#define TIM6_BASE			(PERIPH_BASE_APB1 + 0x1000U)
//#define TIM7_BASE			(PERIPH_BASE_APB1 + 0x1400U)
//#define TIM12_BASE			(PERIPH_BASE_APB1 + 0x1800U)
//#define TIM13_BASE			(PERIPH_BASE_APB1 + 0x1C00U)
//#define TIM14_BASE			(PERIPH_BASE_APB1 + 0x2000U)
//#define LPTIM1_BASE			(PERIPH_BASE_APB1 + 0x2400U)
//#define RTC_BASE			(PERIPH_BASE_APB1 + 0x2800U)
//#define WWDG_BASE			(PERIPH_BASE_APB1 + 0x2C00U)
//#define IWDG_BASE			(PERIPH_BASE_APB1 + 0x3000U)
//#define CAN3_BASE			(PERIPH_BASE_APB1 + 0x3400U)
//#define SPI2_BASE			(PERIPH_BASE_APB1 + 0x3800U)
//#define SPI3_BASE			(PERIPH_BASE_APB1 + 0x3C00U)
//#define SPDIFRX_BASE		(PERIPH_BASE_APB1 + 0x4000U)
//#define USART2_BASE			(PERIPH_BASE_APB1 + 0x4400U)
//#define USART3_BASE			(PERIPH_BASE_APB1 + 0x4800U)
//#define UART4_BASE			(PERIPH_BASE_APB1 + 0x4C00U)
//#define UART5_BASE			(PERIPH_BASE_APB1 + 0x5000U)
//#define I2C1_BASE			(PERIPH_BASE_APB1 + 0x5400U)
//#define I2C2_BASE			(PERIPH_BASE_APB1 + 0x5800U)
//#define I2C3_BASE			(PERIPH_BASE_APB1 + 0x5C00U)
//#define I2C4_BASE			(PERIPH_BASE_APB1 + 0x6000U)
//#define CAN1_BASE			(PERIPH_BASE_APB1 + 0x6400U)
//#define CAN2_BASE			(PERIPH_BASE_APB1 + 0x6800U)
//#define CEC_BASE			(PERIPH_BASE_APB1 + 0x6C00U)
//#define PWR_BASE			(PERIPH_BASE_APB1 + 0x7000U)
//#define DAC_BASE			(PERIPH_BASE_APB1 + 0x7400U)
//#define UART7_BASE			(PERIPH_BASE_APB1 + 0x7800U)
//#define UART8_BASE			(PERIPH_BASE_APB1 + 0x7C00U)
///*!< APB2 peripherals */
//#define SPI2_BASE			(PERIPH_BASE_APB1 + 0x3800)
//#define SPI3_BASE			(PERIPH_BASE_APB1 + 0x3c00)
//#define SPDIF_BASE			(PERIPH_BASE_APB1 + 0x4000)
//#define USART2_BASE			(PERIPH_BASE_APB1 + 0x4400)
//#define USART3_BASE			(PERIPH_BASE_APB1 + 0x4800)
//#define UART4_BASE			(PERIPH_BASE_APB1 + 0x4c00)
//#define UART5_BASE			(PERIPH_BASE_APB1 + 0x5000)
//#define I2C1_BASE			(PERIPH_BASE_APB1 + 0x5400)
//#define I2C2_BASE			(PERIPH_BASE_APB1 + 0x5800)
//#define I2C3_BASE			(PERIPH_BASE_APB1 + 0x5C00)
//#define I2C4_BASE			(PERIPH_BASE_APB1 + 0x6000)
//#define BX_CAN1_BASE			(PERIPH_BASE_APB1 + 0x6400)
//#define BX_CAN2_BASE			(PERIPH_BASE_APB1 + 0x6800)
//#define CEC_BASE			(PERIPH_BASE_APB1 + 0x6C00)
//#define POWER_CONTROL_BASE		(PERIPH_BASE_APB1 + 0x7000)
//#define DAC_BASE			(PERIPH_BASE_APB1 + 0x7400)
//#define UART7_BASE			(PERIPH_BASE_APB1 + 0x7800)
//#define UART8_BASE			(PERIPH_BASE_APB1 + 0x7c00)
///* PERIPH_BASE_APB1 + 0x7800 (0x4000 8000 - 0x4000 FFFF): Reserved */
//
///* APB2 */
//#define TIM1_BASE			(PERIPH_BASE_APB2 + 0x0000)
//#define TIM8_BASE			(PERIPH_BASE_APB2 + 0x0400)
///* PERIPH_BASE_APB2 + 0x0800 (0x4001 0800 - 0x4001 0FFF): Reserved */
//#define USART1_BASE			(PERIPH_BASE_APB2 + 0x1000)
//#define USART6_BASE			(PERIPH_BASE_APB2 + 0x1400)
///* PERIPH_BASE_APB2 + 0x1800 (0x4001 1800 - 0x4001 1FFF): Reserved */
//#define ADC1_BASE			(PERIPH_BASE_APB2 + 0x2000) /* TODO */
//#define ADC2_BASE			(PERIPH_BASE_APB2 + 0x2100) /* TODO */
//#define ADC3_BASE			(PERIPH_BASE_APB2 + 0x2200) /* TODO */
//#define ADC_COMMON_BASE			(PERIPH_BASE_APB2 + 0x2300) /* TODO */
///* PERIPH_BASE_APB2 + 0x2400 (0x4001 2400 - 0x4001 27FF): Reserved */
//#define SDIO_BASE			(PERIPH_BASE_APB2 + 0x2C00) /* SDMMC */
///* PERIPH_BASE_APB2 + 0x2C00 (0x4001 2C00 - 0x4001 2FFF): Reserved */
//#define SPI1_BASE			(PERIPH_BASE_APB2 + 0x3000)
//#define SPI4_BASE			(PERIPH_BASE_APB2 + 0x3400)
//#define SYSCFG_BASE			(PERIPH_BASE_APB2 + 0x3800)
//#define EXTI_BASE			(PERIPH_BASE_APB2 + 0x3C00)
//#define TIM9_BASE			(PERIPH_BASE_APB2 + 0x4000)
//#define TIM10_BASE			(PERIPH_BASE_APB2 + 0x4400)
//#define TIM11_BASE			(PERIPH_BASE_APB2 + 0x4800)
///* PERIPH_BASE_APB2 + 0x4C00 (0x4001 4C00 - 0x4001 4FFF): Reserved */
//#define SPI5_BASE			(PERIPH_BASE_APB2 + 0x5000)
//#define SPI6_BASE			(PERIPH_BASE_APB2 + 0x5400)
//#define SAI1_BASE			(PERIPH_BASE_APB2 + 0x5800)
//#define SAI2_BASE			(PERIPH_BASE_APB2 + 0x5C00)
//#define LCD_TFT_BASE			(PERIPH_BASE_APB2 + 0x6800)
///* PERIPH_BASE_APB2 + 0x6C00 (0x4001 6C00 - 0x4001 FFFF): Reserved */
//
///* AHB1 */
//#define GPIO_PORT_A_BASE		(PERIPH_BASE_AHB1 + 0x0000)
//#define GPIO_PORT_B_BASE		(PERIPH_BASE_AHB1 + 0x0400)
//#define GPIO_PORT_C_BASE		(PERIPH_BASE_AHB1 + 0x0800)
//#define GPIO_PORT_D_BASE		(PERIPH_BASE_AHB1 + 0x0C00)
//#define GPIO_PORT_E_BASE		(PERIPH_BASE_AHB1 + 0x1000)
//#define GPIO_PORT_F_BASE		(PERIPH_BASE_AHB1 + 0x1400)
//#define GPIO_PORT_G_BASE		(PERIPH_BASE_AHB1 + 0x1800)
//#define GPIO_PORT_H_BASE		(PERIPH_BASE_AHB1 + 0x1C00)
//#define GPIO_PORT_I_BASE		(PERIPH_BASE_AHB1 + 0x2000)
//#define GPIO_PORT_J_BASE		(PERIPH_BASE_AHB1 + 0x2400)
//#define GPIO_PORT_K_BASE		(PERIPH_BASE_AHB1 + 0x2800)
///* PERIPH_BASE_AHB1 + 0x2C00 (0x4002 2C00 - 0x4002 2FFF): Reserved */
//#define CRC_BASE			(PERIPH_BASE_AHB1 + 0x3000)
///* PERIPH_BASE_AHB1 + 0x3400 (0x4002 3400 - 0x4002 37FF): Reserved */
//#define RCC_BASE			(PERIPH_BASE_AHB1 + 0x3800)
//#define FLASH_MEM_INTERFACE_BASE	(PERIPH_BASE_AHB1 + 0x3C00)
//#define BKPSRAM_BASE			(PERIPH_BASE_AHB1 + 0x4000)
///* PERIPH_BASE_AHB1 + 0x5000 (0x4002 5000 - 0x4002 5FFF): Reserved */
//#define DMA1_BASE			(PERIPH_BASE_AHB1 + 0x6000)
//#define DMA2_BASE			(PERIPH_BASE_AHB1 + 0x6400)
///* PERIPH_BASE_AHB1 + 0x6800 (0x4002 6800 - 0x4002 7FFF): Reserved */
//#define ETHERNET_BASE			(PERIPH_BASE_AHB1 + 0x8000)
//
//#define DMA2D_BASE			(PERIPH_BASE_AHB1 + 0xB000)
//
//#define USB_OTG_HS_BASE			(PERIPH_BASE_AHB1 + 0x20000)
//
//
///* AHB2 */
//#define USB_OTG_FS_BASE			(PERIPH_BASE_AHB2 + 0x00000)
///* PERIPH_BASE_AHB2 + 0x40000 (0x5004 0000 - 0x5004 FFFF): Reserved */
//#define DCMI_BASE			(PERIPH_BASE_AHB2 + 0x50000)
///* PERIPH_BASE_AHB2 + 0x50400 (0x5005 0400 - 0x5005 FFFF): Reserved */
//#define CRYP_BASE			(PERIPH_BASE_AHB2 + 0x60000)
//#define HASH_BASE			(PERIPH_BASE_AHB2 + 0x60400)
///* PERIPH_BASE_AHB2 + 0x60C00 (0x5006 0C00 - 0x5006 07FF): Reserved */
//#define RNG_BASE			(PERIPH_BASE_AHB2 + 0x60800)
///* PERIPH_BASE_AHB2 + 0x61000 (0x5006 1000 - 0x5FFF FFFF): Reserved */
//
///* AHB3 */
//#define FMC1_BASE			(PERIPH_BASE_AHB3 + 0x00000000U)
//#define FMC2_BASE			(PERIPH_BASE_AHB3 + 0x10000000U)
//#define FMC3_BASE			(PERIPH_BASE_AHB3 + 0x20000000U)
//#define QSPI_BASE			(PERIPH_BASE_AHB3 + 0x30000000U)
//#define FMCC_BASE			(PERIPH_BASE_AHB3 + 0x40000000U)
//#define QSPIC_BASE			(PERIPH_BASE_AHB3 + 0x40001000U)
//#define FMC5_BASE			(PERIPH_BASE_AHB3 + 0x60000000U)
//#define FMC6_BASE			(PERIPH_BASE_AHB3 + 0x70000000U)
//
///* Private peripherals */
//#define DBGMCU_BASE			(PPBI_BASE + 0x00042000)

///* Device Electronic Signature */
//#define DESIG_FLASH_SIZE_BASE		(0x1FF0F422U)
//#define DESIG_UNIQUE_ID_BASE		(0x1FF0F420U)
//#define DESIG_UNIQUE_ID0		MMIO32(DESIG_UNIQUE_ID_BASE)
//#define DESIG_UNIQUE_ID1		MMIO32(DESIG_UNIQUE_ID_BASE + 4)
//#define DESIG_UNIQUE_ID2		MMIO32(DESIG_UNIQUE_ID_BASE + 8)
//
///* ST provided factory calibration values @ 3.3V */
//#define ST_VREFINT_CAL			MMIO16(0x1FF07A4A)
//#define ST_TSENSE_CAL1_30C		MMIO16(0x1FF07A4C)
//#define ST_TSENSE_CAL2_110C		MMIO16(0x1FF07A4E)

typedef enum
{
  RESET = 0,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0,
  ENABLE = !DISABLE
} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum
{
  ERROR = 0,
  SUCCESS = !ERROR
} ErrorStatus;

#define SET_BIT(REG, BIT)     ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)    ((REG) & (BIT))

#define CLEAR_REG(REG)        ((REG) = (0x0))

#define WRITE_REG(REG, VAL)   ((REG) = (VAL))

#define READ_REG(REG)         ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

#endif
