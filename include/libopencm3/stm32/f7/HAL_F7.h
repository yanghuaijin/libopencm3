#ifndef __HAL_F7_H
#define __HAL_F7_H

typedef enum
{
  HAL_OK       = 0x00U,
  HAL_ERROR    = 0x01U,
  HAL_BUSY     = 0x02U,
  HAL_TIMEOUT  = 0x03U
} HAL_StatusTypeDef;

/**
  * @brief  HAL Lock structures definition
  */
typedef enum
{
  HAL_UNLOCKED = 0x00,
  HAL_LOCKED   = 0x01
} HAL_LockTypeDef;

extern uint32_t SystemCoreClock;
extern const uint8_t AHBPrescTable[16];
extern const uint8_t APBPrescTable[8];

#endif /* __HAL_F7_H */
