/**
 * @file app.h
 * @brief This file contains all the function prototypes for
 *        the app.c file
 */

#ifndef __APP_H
#define __APP_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

extern OS_TCB StartTaskTCB;
extern CPU_STK StartTaskSTK[512];
void start_task(void *p_arg);

#ifdef __cplusplus
}
#endif

#endif /* __APP_H */
