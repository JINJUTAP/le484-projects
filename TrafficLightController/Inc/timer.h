#ifndef __TIMER_H
#define __TIMER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx_hal.h"

// exported global variables
extern int Timeout_Status;

// Function prototype
void Timeout_Config(uint32_t value);
void Delay(uint32_t value);
void HAL_IncTick(void);

#ifdef __cplusplus
}
#endif

#endif // __TIMER_H
