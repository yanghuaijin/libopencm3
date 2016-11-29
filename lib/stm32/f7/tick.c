//f7 only
#include <libopencm3/stm32/f7/tick.h>

__IO uint32_t uwTick;

HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority)
{
	/*Configure the SysTick to have interrupt in 1ms time basis*/
	SysTick_Config(SystemCoreClock/1000);

	/*Configure the SysTick IRQ priority */
	NVIC_SetPriority(SysTick_IRQn, TickPriority);

	/* Return function status */
	return HAL_OK;
}

void HAL_IncTick(void)
{
  uwTick++;
}

uint32_t HAL_GetTick(void)
{
  return uwTick;
}

void HAL_Delay(__IO uint32_t Delay)
{
  uint32_t tickstart = 0;
  tickstart = HAL_GetTick();
  while((HAL_GetTick() - tickstart) < Delay)
  {
  }
}

void HAL_SuspendTick(void)
{
  /* Disable SysTick Interrupt */
  SysTick->CTRL &= ~SysTick_CTRL_TICKINT_Msk;
}

void HAL_ResumeTick(void)
{
  /* Enable SysTick Interrupt */
  SysTick->CTRL  |= SysTick_CTRL_TICKINT_Msk;
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{
  HAL_IncTick();
}
