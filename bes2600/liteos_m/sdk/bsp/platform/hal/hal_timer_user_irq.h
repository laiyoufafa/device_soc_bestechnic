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
#ifndef __HAL_TIMER_USER_IRQ_H__
#define __HAL_TIMER_USER_IRQ_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "hal_timer.h"

void hal_user_timer0_setup(enum HAL_TIMER_TYPE_T type, HAL_TIMER_IRQ_HANDLER_T handler);

void hal_user_timer0_start(uint32_t load);

void hal_user_timer0_stop(void);

void hal_user_timer0_continue(void);

int hal_user_timer0_is_enabled(void);

void hal_user_timer0_reload(uint32_t load);

uint32_t hal_user_timer0_get_raw_value(void);

int hal_user_timer0_irq_active(void);

int hal_user_timer0_irq_pending(void);

uint32_t hal_user_timer0_get_elapsed_time(void);

void hal_user_timer1_setup(enum HAL_TIMER_TYPE_T type, HAL_TIMER_IRQ_HANDLER_T handler);

void hal_user_timer1_start(uint32_t load);

void hal_user_timer1_stop(void);

void hal_user_timer1_continue(void);

int hal_user_timer1_is_enabled(void);

void hal_user_timer1_reload(uint32_t load);

uint32_t hal_user_timer1_get_raw_value(void);

int hal_user_timer1_irq_active(void);

int hal_user_timer1_irq_pending(void);

uint32_t hal_user_timer1_get_elapsed_time(void);

#ifdef __cplusplus
}
#endif

#endif
