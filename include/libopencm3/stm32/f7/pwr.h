/** @defgroup pwr_defines PWR Defines
 *
 * @brief <b>Defined Constants and Types for the STM32F7xx Power Control</b>
 * 
 * @ingroup STM32F7xx_defines
 * 
 *��@version 1.0.0
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

#ifndef LIBOPENCM3_PWR_H
#define LIBOPENCM3_PWR_H

#include <libopencmsis/core_cm3.h>
//#include <libopencm3/stm32/common/pwr_common_all.h>

#define PWR_CR1			MMIO32(POWER_CONTROL_BASE + 0x00)
#define PWR_CSR1		MMIO32(POWER_CONTROL_BASE + 0x04)
#define PWR_CR2			MMIO32(POWER_CONTROL_BASE + 0x08)
#define PWR_CSR2		MMIO32(POWER_CONTROL_BASE + 0x0C)

/*
 * This file extends the common STM32 version with definitions only
 * applicable to the STM32F7 series of devices.
 */

/********************  Bit definition for PWR_CR1 register  ********************/
#define  PWR_CR1_LPDS                         0x00000001U     /*!< Low-Power Deepsleep                 */
#define  PWR_CR1_PDDS                         0x00000002U     /*!< Power Down Deepsleep                */
#define  PWR_CR1_CSBF                         0x00000008U     /*!< Clear Standby Flag                  */
#define  PWR_CR1_PVDE                         0x00000010U     /*!< Power Voltage Detector Enable       */
#define  PWR_CR1_PLS                          0x000000E0U     /*!< PLS[2:0] bits (PVD Level Selection) */
#define  PWR_CR1_PLS_0                        0x00000020U     /*!< Bit 0 */
#define  PWR_CR1_PLS_1                        0x00000040U     /*!< Bit 1 */
#define  PWR_CR1_PLS_2                        0x00000080U     /*!< Bit 2 */

/*!< PVD level configuration */
#define  PWR_CR1_PLS_LEV0                     0x00000000U     /*!< PVD level 0 */
#define  PWR_CR1_PLS_LEV1                     0x00000020U     /*!< PVD level 1 */
#define  PWR_CR1_PLS_LEV2                     0x00000040U     /*!< PVD level 2 */
#define  PWR_CR1_PLS_LEV3                     0x00000060U     /*!< PVD level 3 */
#define  PWR_CR1_PLS_LEV4                     0x00000080U     /*!< PVD level 4 */
#define  PWR_CR1_PLS_LEV5                     0x000000A0U     /*!< PVD level 5 */
#define  PWR_CR1_PLS_LEV6                     0x000000C0U     /*!< PVD level 6 */
#define  PWR_CR1_PLS_LEV7                     0x000000E0U     /*!< PVD level 7 */
#define  PWR_CR1_DBP                          0x00000100U     /*!< Disable Backup Domain write protection                     */
#define  PWR_CR1_FPDS                         0x00000200U     /*!< Flash power down in Stop mode                              */
#define  PWR_CR1_LPUDS                        0x00000400U     /*!< Low-power regulator in deepsleep under-drive mode          */
#define  PWR_CR1_MRUDS                        0x00000800U     /*!< Main regulator in deepsleep under-drive mode               */
#define  PWR_CR1_ADCDC1                       0x00002000U     /*!< Refer to AN4073 on how to use this bit */
#define  PWR_CR1_VOS                          0x0000C000U     /*!< VOS[1:0] bits (Regulator voltage scaling output selection) */
#define  PWR_CR1_VOS_0                        0x00004000U     /*!< Bit 0 */
#define  PWR_CR1_VOS_1                        0x00008000U     /*!< Bit 1 */
#define  PWR_CR1_ODEN                         0x00010000U     /*!< Over Drive enable                   */
#define  PWR_CR1_ODSWEN                       0x00020000U     /*!< Over Drive switch enabled           */
#define  PWR_CR1_UDEN                         0x000C0000U     /*!< Under Drive enable in stop mode     */
#define  PWR_CR1_UDEN_0                       0x00040000U     /*!< Bit 0                               */
#define  PWR_CR1_UDEN_1                       0x00080000U     /*!< Bit 1                               */

/*******************  Bit definition for PWR_CSR1 register  ********************/
#define  PWR_CSR1_WUIF                        0x00000001U     /*!< Wake up internal Flag                            */
#define  PWR_CSR1_SBF                         0x00000002U     /*!< Standby Flag                                     */
#define  PWR_CSR1_PVDO                        0x00000004U     /*!< PVD Output                                       */
#define  PWR_CSR1_BRR                         0x00000008U     /*!< Backup regulator ready                           */
#define  PWR_CSR1_EIWUP                       0x00000100U     /*!< Enable internal wakeup                           */
#define  PWR_CSR1_BRE                         0x00000200U     /*!< Backup regulator enable                          */
#define  PWR_CSR1_VOSRDY                      0x00004000U     /*!< Regulator voltage scaling output selection ready */
#define  PWR_CSR1_ODRDY                       0x00010000U     /*!< Over Drive generator ready                       */
#define  PWR_CSR1_ODSWRDY                     0x00020000U     /*!< Over Drive Switch ready                          */
#define  PWR_CSR1_UDRDY                       0x000C0000U     /*!< Under Drive ready                                */


/********************  Bit definition for PWR_CR2 register  ********************/
#define  PWR_CR2_CWUPF1                         0x00000001U     /*!< Clear Wakeup Pin Flag for PA0      */
#define  PWR_CR2_CWUPF2                         0x00000002U     /*!< Clear Wakeup Pin Flag for PA2      */
#define  PWR_CR2_CWUPF3                         0x00000004U     /*!< Clear Wakeup Pin Flag for PC1      */
#define  PWR_CR2_CWUPF4                         0x00000008U     /*!< Clear Wakeup Pin Flag for PC13     */
#define  PWR_CR2_CWUPF5                         0x00000010U     /*!< Clear Wakeup Pin Flag for PI8      */
#define  PWR_CR2_CWUPF6                         0x00000020U     /*!< Clear Wakeup Pin Flag for PI11     */
#define  PWR_CR2_WUPP1                          0x00000100U     /*!< Wakeup Pin Polarity bit for PA0    */
#define  PWR_CR2_WUPP2                          0x00000200U     /*!< Wakeup Pin Polarity bit for PA2    */
#define  PWR_CR2_WUPP3                          0x00000400U     /*!< Wakeup Pin Polarity bit for PC1    */
#define  PWR_CR2_WUPP4                          0x00000800U     /*!< Wakeup Pin Polarity bit for PC13   */
#define  PWR_CR2_WUPP5                          0x00001000U     /*!< Wakeup Pin Polarity bit for PI8    */
#define  PWR_CR2_WUPP6                          0x00002000U     /*!< Wakeup Pin Polarity bit for PI11   */

/*******************  Bit definition for PWR_CSR2 register  ********************/
#define  PWR_CSR2_WUPF1                         0x00000001U     /*!< Wakeup Pin Flag for PA0            */
#define  PWR_CSR2_WUPF2                         0x00000002U     /*!< Wakeup Pin Flag for PA2            */
#define  PWR_CSR2_WUPF3                         0x00000004U     /*!< Wakeup Pin Flag for PC1            */
#define  PWR_CSR2_WUPF4                         0x00000008U     /*!< Wakeup Pin Flag for PC13           */
#define  PWR_CSR2_WUPF5                         0x00000010U     /*!< Wakeup Pin Flag for PI8            */
#define  PWR_CSR2_WUPF6                         0x00000020U     /*!< Wakeup Pin Flag for PI11           */
#define  PWR_CSR2_EWUP1                         0x00000100U     /*!< Enable Wakeup Pin PA0              */
#define  PWR_CSR2_EWUP2                         0x00000200U     /*!< Enable Wakeup Pin PA2              */
#define  PWR_CSR2_EWUP3                         0x00000400U     /*!< Enable Wakeup Pin PC1              */
#define  PWR_CSR2_EWUP4                         0x00000800U     /*!< Enable Wakeup Pin PC13             */
#define  PWR_CSR2_EWUP5                         0x00001000U     /*!< Enable Wakeup Pin PI8              */
#define  PWR_CSR2_EWUP6                         0x00002000U     /*!< Enable Wakeup Pin PI11             */

/************************** MACRO **************************/
/* PWR_FLAG_WU: Wake Up flag */
#define PWR_FLAG_WU                     PWR_CSR1_WUIF
/* PWR_FLAG_SB: StandBy flag */
#define PWR_FLAG_SB                     PWR_CSR1_SBF
/* PWR_FLAG_PVDO: PVD Output */
#define PWR_FLAG_PVDO                   PWR_CSR1_PVDO
/* PWR_FLAG_BRR: Backup regulator ready flag */
#define PWR_FLAG_BRR                    PWR_CSR1_BRR
/* PWR_FLAG_VOSRDY: This flag indicates that the Regulator voltage scaling output selection is ready */
#define PWR_FLAG_VOSRDY                 PWR_CSR1_VOSRDY
/* Check PWR flag is set or not. */
#define PWR_GET_FLAG(__FLAG__) ((PWR_CSR1 & (__FLAG__)) == (__FLAG__))
/* Clear the PWR's pending flags. */
#define PWR_CLEAR_FLAG(__FLAG__) (PWR_CR1 |=  (__FLAG__) << 2)

/* Macros to enable or disable the Over drive mode. */
#define PWR_OVERDRIVE_ENABLE() (PWR_CR1 |= (uint32_t)PWR_CR1_ODEN)
#define PWR_OVERDRIVE_DISABLE() (PWR_CR1 &= (uint32_t)(~PWR_CR1_ODEN))

/* Macros to enable or disable the Over drive switching. */
#define PWR_OVERDRIVESWITCHING_ENABLE() (PWR_CR1 |= (uint32_t)PWR_CR1_ODSWEN)
#define PWR_OVERDRIVESWITCHING_DISABLE() (PWR_CR1 &= (uint32_t)(~PWR_CR1_ODSWEN))

/* Macros to enable or disable the Under drive mode. */
#define PWR_UNDERDRIVE_ENABLE() (PWR_CR1 |= (uint32_t)PWR_CR1_UDEN)
#define PWR_UNDERDRIVE_DISABLE() (PWR_CR1 &= (uint32_t)(~PWR_CR1_UDEN))

/* PWR_FLAG_ODRDY: This flag indicates that the Over-drive mode is ready */
#define PWR_FLAG_ODRDY                  PWR_CSR1_ODRDY
/* PWR_FLAG_ODSWRDY: This flag indicates that the Over-drive mode switching is ready */
#define PWR_FLAG_ODSWRDY                PWR_CSR1_ODSWRDY
/* PWR_FLAG_UDRDY: This flag indicates that the Under-drive mode is enabled in Stop mode */
#define PWR_FLAG_UDRDY                  PWR_CSR1_UDRDY
/* Check PWR flag is set or not. */
#define PWR_GET_ODRUDR_FLAG(__FLAG__) ((PWR_CSR1 & (__FLAG__)) == (__FLAG__))
/* Clear the Under-Drive Ready flag. */
#define PWR_CLEAR_ODRUDR_FLAG() (PWR_CSR1 |= PWR_FLAG_UDRDY)

/* PWR_WAKEUP_PIN_FLAG1: Wakeup Pin Flag for PA0 */
#define PWR_WAKEUP_PIN_FLAG1            PWR_CSR2_WUPF1
/* PWR_WAKEUP_PIN_FLAG2: Wakeup Pin Flag for PA2 */
#define PWR_WAKEUP_PIN_FLAG2            PWR_CSR2_WUPF2
/* PWR_WAKEUP_PIN_FLAG3: Wakeup Pin Flag for PC1 */
#define PWR_WAKEUP_PIN_FLAG3            PWR_CSR2_WUPF3
/* PWR_WAKEUP_PIN_FLAG4: Wakeup Pin Flag for PC13 */
#define PWR_WAKEUP_PIN_FLAG4            PWR_CSR2_WUPF4
/* PWR_WAKEUP_PIN_FLAG5: Wakeup Pin Flag for PI8 */
#define PWR_WAKEUP_PIN_FLAG5            PWR_CSR2_WUPF5
/* PWR_WAKEUP_PIN_FLAG6: Wakeup Pin Flag for PI11 */
#define PWR_WAKEUP_PIN_FLAG6            PWR_CSR2_WUPF6
/* Check Wake Up flag is set or not. */
#define PWR_GET_WAKEUP_FLAG(__WUFLAG__) (PWR_CSR2 & (__WUFLAG__))
/* Clear the WakeUp pins flags. */
#define PWR_CLEAR_WAKEUP_FLAG(__WUFLAG__) (PWR_CR2 |=  (__WUFLAG__))

/** @brief  macros configure the main internal regulator output voltage.
  * @param  __REGULATOR__: specifies the regulator output voltage to achieve
  *         a tradeoff between performance and power consumption when the device does
  *         not operate at the maximum frequency (refer to the datasheets for more details).
  *          This parameter can be one of the following values:
  *            @arg PWR_REGULATOR_VOLTAGE_SCALE1: Regulator voltage output Scale 1 mode
  *            @arg PWR_REGULATOR_VOLTAGE_SCALE2: Regulator voltage output Scale 2 mode
  *            @arg PWR_REGULATOR_VOLTAGE_SCALE3: Regulator voltage output Scale 3 mode
  * @retval None
  */
#define __HAL_PWR_VOLTAGESCALING_CONFIG(__REGULATOR__) do {                                                     \
                                                            __IO uint32_t tmpreg;                               \
                                                            MODIFY_REG(PWR->CR1, PWR_CR1_VOS, (__REGULATOR__)); \
                                                            /* Delay after an RCC peripheral clock enabling */  \
                                                            tmpreg = READ_BIT(PWR->CR1, PWR_CR1_VOS);           \
                                                            UNUSED(tmpreg);                                     \
				                                                	} while(0)

/** @brief  Check PWR flag is set or not.
  * @param  __FLAG__: specifies the flag to check.
  *           This parameter can be one of the following values:
  *            @arg PWR_FLAG_WU: Wake Up flag. This flag indicates that a wakeup event
  *                  was received on the internal wakeup line in standby mode (RTC alarm (Alarm A or Alarm B),
  *                  RTC Tamper event, RTC TimeStamp event or RTC Wakeup)).
  *            @arg PWR_FLAG_SB: StandBy flag. This flag indicates that the system was
  *                  resumed from StandBy mode.
  *            @arg PWR_FLAG_PVDO: PVD Output. This flag is valid only if PVD is enabled
  *                  by the HAL_PWR_EnablePVD() function. The PVD is stopped by Standby mode
  *                  For this reason, this bit is equal to 0 after Standby or reset
  *                  until the PVDE bit is set.
  *            @arg PWR_FLAG_BRR: Backup regulator ready flag. This bit is not reset
  *                  when the device wakes up from Standby mode or by a system reset
  *                  or power reset.
  *            @arg PWR_FLAG_VOSRDY: This flag indicates that the Regulator voltage
  *                 scaling output selection is ready.
  * @retval The new state of __FLAG__ (TRUE or FALSE).
  */
#define __HAL_PWR_GET_FLAG(__FLAG__) ((PWR->CSR1 & (__FLAG__)) == (__FLAG__))

/** @brief  Clear the PWR's pending flags.
  * @param  __FLAG__: specifies the flag to clear.
  *          This parameter can be one of the following values:
  *            @arg PWR_FLAG_SB: StandBy flag
  */
#define __HAL_PWR_CLEAR_FLAG(__FLAG__) (PWR->CR1 |=  (__FLAG__) << 2)

/**
  * @brief Enable the PVD Exti Line 16.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_ENABLE_IT()   (EXTI->IMR |= (PWR_EXTI_LINE_PVD))

/**
  * @brief Disable the PVD EXTI Line 16.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_DISABLE_IT()  (EXTI->IMR &= ~(PWR_EXTI_LINE_PVD))

/**
  * @brief Enable event on PVD Exti Line 16.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_ENABLE_EVENT()   (EXTI->EMR |= (PWR_EXTI_LINE_PVD))

/**
  * @brief Disable event on PVD Exti Line 16.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_DISABLE_EVENT()  (EXTI->EMR &= ~(PWR_EXTI_LINE_PVD))

/**
  * @brief Enable the PVD Extended Interrupt Rising Trigger.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_ENABLE_RISING_EDGE()   SET_BIT(EXTI->RTSR, PWR_EXTI_LINE_PVD)

/**
  * @brief Disable the PVD Extended Interrupt Rising Trigger.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_DISABLE_RISING_EDGE()  CLEAR_BIT(EXTI->RTSR, PWR_EXTI_LINE_PVD)

/**
  * @brief Enable the PVD Extended Interrupt Falling Trigger.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_ENABLE_FALLING_EDGE()   SET_BIT(EXTI->FTSR, PWR_EXTI_LINE_PVD)


/**
  * @brief Disable the PVD Extended Interrupt Falling Trigger.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_DISABLE_FALLING_EDGE()  CLEAR_BIT(EXTI->FTSR, PWR_EXTI_LINE_PVD)


/**
  * @brief  PVD EXTI line configuration: set rising & falling edge trigger.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_ENABLE_RISING_FALLING_EDGE()   __HAL_PWR_PVD_EXTI_ENABLE_RISING_EDGE();__HAL_PWR_PVD_EXTI_ENABLE_FALLING_EDGE();

/**
  * @brief Disable the PVD Extended Interrupt Rising & Falling Trigger.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_DISABLE_RISING_FALLING_EDGE()  __HAL_PWR_PVD_EXTI_DISABLE_RISING_EDGE();__HAL_PWR_PVD_EXTI_DISABLE_FALLING_EDGE();

/**
  * @brief checks whether the specified PVD Exti interrupt flag is set or not.
  * @retval EXTI PVD Line Status.
  */
#define __HAL_PWR_PVD_EXTI_GET_FLAG()  (EXTI->PR & (PWR_EXTI_LINE_PVD))

/**
  * @brief Clear the PVD Exti flag.
  * @retval None.
  */
#define __HAL_PWR_PVD_EXTI_CLEAR_FLAG()  (EXTI->PR = (PWR_EXTI_LINE_PVD))

/**
  * @brief  Generates a Software interrupt on PVD EXTI line.
  * @retval None
  */
#define __HAL_PWR_PVD_EXTI_GENERATE_SWIT() (EXTI->SWIER |= (PWR_EXTI_LINE_PVD))

/** @brief Macros to enable or disable the Over drive mode.
  */
#define __HAL_PWR_OVERDRIVE_ENABLE() (PWR->CR1 |= (uint32_t)PWR_CR1_ODEN)
#define __HAL_PWR_OVERDRIVE_DISABLE() (PWR->CR1 &= (uint32_t)(~PWR_CR1_ODEN))

/** @brief Macros to enable or disable the Over drive switching.
  */
#define __HAL_PWR_OVERDRIVESWITCHING_ENABLE() (PWR->CR1 |= (uint32_t)PWR_CR1_ODSWEN)
#define __HAL_PWR_OVERDRIVESWITCHING_DISABLE() (PWR->CR1 &= (uint32_t)(~PWR_CR1_ODSWEN))

/** @brief Macros to enable or disable the Under drive mode.
  * @note  This mode is enabled only with STOP low power mode.
  *        In this mode, the 1.2V domain is preserved in reduced leakage mode. This
  *        mode is only available when the main regulator or the low power regulator
  *        is in low voltage mode.
  * @note  If the Under-drive mode was enabled, it is automatically disabled after
  *        exiting Stop mode.
  *        When the voltage regulator operates in Under-drive mode, an additional
  *        startup delay is induced when waking up from Stop mode.
  */
#define __HAL_PWR_UNDERDRIVE_ENABLE() (PWR->CR1 |= (uint32_t)PWR_CR1_UDEN)
#define __HAL_PWR_UNDERDRIVE_DISABLE() (PWR->CR1 &= (uint32_t)(~PWR_CR1_UDEN))

/** @brief  Check PWR flag is set or not.
  * @param  __FLAG__: specifies the flag to check.
  *         This parameter can be one of the following values:
  *            @arg PWR_FLAG_ODRDY: This flag indicates that the Over-drive mode
  *                                 is ready
  *            @arg PWR_FLAG_ODSWRDY: This flag indicates that the Over-drive mode
  *                                   switching is ready
  *            @arg PWR_FLAG_UDRDY: This flag indicates that the Under-drive mode
  *                                 is enabled in Stop mode
  * @retval The new state of __FLAG__ (TRUE or FALSE).
  */
#define __HAL_PWR_GET_ODRUDR_FLAG(__FLAG__) ((PWR->CSR1 & (__FLAG__)) == (__FLAG__))

/** @brief Clear the Under-Drive Ready flag.
  */
#define __HAL_PWR_CLEAR_ODRUDR_FLAG() (PWR->CSR1 |= PWR_FLAG_UDRDY)

/** @brief  Check Wake Up flag is set or not.
  * @param  __WUFLAG__: specifies the Wake Up flag to check.
  *          This parameter can be one of the following values:
  *            @arg PWR_WAKEUP_PIN_FLAG1: Wakeup Pin Flag for PA0
  *            @arg PWR_WAKEUP_PIN_FLAG2: Wakeup Pin Flag for PA2
  *            @arg PWR_WAKEUP_PIN_FLAG3: Wakeup Pin Flag for PC1
  *            @arg PWR_WAKEUP_PIN_FLAG4: Wakeup Pin Flag for PC13
  *            @arg PWR_WAKEUP_PIN_FLAG5: Wakeup Pin Flag for PI8
  *            @arg PWR_WAKEUP_PIN_FLAG6: Wakeup Pin Flag for PI11
  */
#define __HAL_PWR_GET_WAKEUP_FLAG(__WUFLAG__) (PWR->CSR2 & (__WUFLAG__))

/** @brief  Clear the WakeUp pins flags.
  * @param  __WUFLAG__: specifies the Wake Up pin flag to clear.
  *          This parameter can be one of the following values:
  *            @arg PWR_WAKEUP_PIN_FLAG1: Wakeup Pin Flag for PA0
  *            @arg PWR_WAKEUP_PIN_FLAG2: Wakeup Pin Flag for PA2
  *            @arg PWR_WAKEUP_PIN_FLAG3: Wakeup Pin Flag for PC1
  *            @arg PWR_WAKEUP_PIN_FLAG4: Wakeup Pin Flag for PC13
  *            @arg PWR_WAKEUP_PIN_FLAG5: Wakeup Pin Flag for PI8
  *            @arg PWR_WAKEUP_PIN_FLAG6: Wakeup Pin Flag for PI11
  */
#define __HAL_PWR_CLEAR_WAKEUP_FLAG(__WUFLAG__) (PWR->CR2 |=  (__WUFLAG__))

#include <libopencm3/stm32/f7/HAL_F7.h>

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

HAL_StatusTypeDef HAL_PWREx_EnableOverDrive(void);

END_DECLS

#endif
