/*
 * Copyright (c) 2021 Bestechnic (Shanghai) Co., Ltd. All rights reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __SYS_TIME_H__
#define __SYS_TIME_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "plat_types.h"
#include "hal_cmu.h"
#ifndef osCMSIS_FreeRTOS
#include <sys/time.h>
#else
#include "time.h"
#endif

typedef uint8_t u8_t;
typedef int8_t s8_t;
typedef uint16_t u16_t;
typedef int16_t s16_t;
typedef uint32_t u32_t;
typedef int32_t s32_t;

#define DIFF_SEC_GMT8          ((u32_t)(8*3600))

void hal_sys_time_set_ntp_delta(int delta);

void set_ntp_update(void);

int get_ntp_ready(void);

void hal_sys_time_init(u32_t sec, u32_t us);

time_t hal_sys_time_get(void);

char *hal_sys_get_cur_time(void);

time_t hal_sys_get_cur_rawtime(void);

char *hal_sys_format_time(time_t t);

int gettimeofday(struct timeval *__restrict __p, void *__restrict __tz);

int gettimeready(void);


#ifdef __cplusplus
}
#endif

#endif

