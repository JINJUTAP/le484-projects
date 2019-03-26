#ifndef __CTRLER_H
#define __CTRLER_H

#ifdef __cplusplus
extern "C" {
#endif


#include "stm32f4xx_hal.h"


// Function prototype
void Ctrler_Init(void);
uint32_t Ctrler_Exec(void);


#ifdef __cplusplus
}
#endif

#endif // __CTRLER_H
