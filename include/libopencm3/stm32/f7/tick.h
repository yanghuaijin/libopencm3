#include <libopencmsis/core_cm3.h>
#include <libopencm3/stm32/f7/HAL_F7.h>

#ifndef __TICK_H
#define __TICK_H

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority);

void HAL_IncTick(void);
uint32_t HAL_GetTick(void);
void HAL_Delay(__IO uint32_t Delay);
void HAL_SuspendTick(void);
void HAL_ResumeTick(void);

#endif /* __TICK_H */
