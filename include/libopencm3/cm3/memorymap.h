/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2009 Uwe Hermann <uwe@hermann-uwe.de>
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

#ifndef LIBOPENCM3_CM3_MEMORYMAP_H
#define LIBOPENCM3_CM3_MEMORYMAP_H

/* --- ARM Cortex-M0, M3, M4 & M7 specific definitions ----------------------- */

#define  TICK_INT_PRIORITY				((uint32_t)0x0FU) /*!< tick interrupt priority */
#define __NVIC_PRIO_BITS				3U

/* needed around efm32tg840f32.h:229. comparing the efm32lib definitions to the
 * libopencm3 ones, "volatile" is all that's missing. */
#ifdef __cplusplus
  #define   __I     volatile             /*!< Defines 'read only' permissions */
#else
  #define   __I     volatile const       /*!< Defines 'read only' permissions */
#endif
#define     __O     volatile             /*!< Defines 'write only' permissions */
#define     __IO    volatile             /*!< Defines 'read / write' permissions */

/* following defines should be used for structure members */
#define     __IM     volatile const      /*! Defines 'read only' structure member permissions */
#define     __OM     volatile            /*! Defines 'write only' structure member permissions */
#define     __IOM    volatile            /*! Defines 'read / write' structure member permissions */

/* Private peripheral bus - Internal */
#define PPBI_BASE                       (0xE0000000U)

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
/* ITM: Instrumentation Trace Macrocell */
#define ITM_BASE                        (PPBI_BASE + 0x0000)

/* DWT: Data Watchpoint and Trace unit */
#define DWT_BASE                        (PPBI_BASE + 0x1000)

/* FPB: Flash Patch and Breakpoint unit */
#define FPB_BASE                        (PPBI_BASE + 0x2000)
#endif

#define TPI_BASE						(PPBI_BASE + 0x40000UL)                            /*!< TPI Base Address */
#define CoreDebug_BASE					(PPBI_BASE + 0xEDF0UL)                            /*!< Core Debug Base Address */

/* PPBI_BASE + 0x3000 (0xE000 3000 - 0xE000 DFFF): Reserved */

#define SCS_BASE                        (PPBI_BASE + 0xE000)

/* PPBI_BASE + 0xF000 (0xE000 F000 - 0xE003 FFFF): Reserved */

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
#define TPIU_BASE                       (PPBI_BASE + 0x40000)
#endif

/* --- SCS: System Control Space --- */

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
/* ITR: Interrupt Type Register */
#define ITR_BASE                        (SCS_BASE + 0x0000)
#endif

/* SYS_TICK: System Timer */
#define SYS_TICK_BASE                   (SCS_BASE + 0x0010)

/* NVIC: Nested Vector Interrupt Controller */
#define NVIC_BASE                       (SCS_BASE + 0x0100)

/* SCB: System Control Block */
#define SCB_BASE                        (SCS_BASE + 0x0D00)

/* MPU: Memory protection unit */
#define MPU_BASE                        (SCS_BASE + 0x0D90)

/* Those defined only on CM0*/
#if defined(__ARM_ARCH_6M__)
/* DEBUG: Debug control and configuration */
#define DEBUG_BASE                      (SCS_BASE + 0x0DF0)
#endif

/* Those defined only on ARMv7 and above */
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
/* STE: Software Trigger Interrupt Register */
#define STIR_BASE                       (SCS_BASE + 0x0F00)
/* ID: ID space */
#define ID_BASE                         (SCS_BASE + 0x0FD0)
#endif

#endif
