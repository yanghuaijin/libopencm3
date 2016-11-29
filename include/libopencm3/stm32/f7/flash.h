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

#define FLASH_LATENCY_0                FLASH_ACR_LATENCY_0WS   /*!< FLASH Zero Latency cycle      */
#define FLASH_LATENCY_1                FLASH_ACR_LATENCY_1WS   /*!< FLASH One Latency cycle       */
#define FLASH_LATENCY_2                FLASH_ACR_LATENCY_2WS   /*!< FLASH Two Latency cycles      */
#define FLASH_LATENCY_3                FLASH_ACR_LATENCY_3WS   /*!< FLASH Three Latency cycles    */
#define FLASH_LATENCY_4                FLASH_ACR_LATENCY_4WS   /*!< FLASH Four Latency cycles     */
#define FLASH_LATENCY_5                FLASH_ACR_LATENCY_5WS   /*!< FLASH Five Latency cycles     */
#define FLASH_LATENCY_6                FLASH_ACR_LATENCY_6WS   /*!< FLASH Six Latency cycles      */
#define FLASH_LATENCY_7                FLASH_ACR_LATENCY_7WS   /*!< FLASH Seven Latency cycles    */
#define FLASH_LATENCY_8                FLASH_ACR_LATENCY_8WS   /*!< FLASH Eight Latency cycles    */
#define FLASH_LATENCY_9                FLASH_ACR_LATENCY_9WS   /*!< FLASH Nine Latency cycles     */
#define FLASH_LATENCY_10               FLASH_ACR_LATENCY_10WS  /*!< FLASH Ten Latency cycles      */
#define FLASH_LATENCY_11               FLASH_ACR_LATENCY_11WS  /*!< FLASH Eleven Latency cycles   */
#define FLASH_LATENCY_12               FLASH_ACR_LATENCY_12WS  /*!< FLASH Twelve Latency cycles   */
#define FLASH_LATENCY_13               FLASH_ACR_LATENCY_13WS  /*!< FLASH Thirteen Latency cycles */
#define FLASH_LATENCY_14               FLASH_ACR_LATENCY_14WS  /*!< FLASH Fourteen Latency cycles */
#define FLASH_LATENCY_15               FLASH_ACR_LATENCY_15WS  /*!< FLASH Fifteen Latency cycles  */

/* Set the FLASH Latency. */
#define __HAL_FLASH_SET_LATENCY(__LATENCY__)	MODIFY_REG(FLASH_ACR, FLASH_ACR_LATENCY, (uint32_t)(__LATENCY__))
/* Get the FLASH Latency. */
#define __HAL_FLASH_GET_LATENCY()				(READ_BIT((FLASH_ACR), FLASH_ACR_LATENCY))

BEGIN_DECLS

uint8_t Increase_flash_latency(uint32_t FLatency);
uint8_t Decrease_flash_latency(uint32_t FLatency);

END_DECLS

#endif

