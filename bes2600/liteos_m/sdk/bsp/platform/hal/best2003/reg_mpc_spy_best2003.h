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
#ifndef __REG_MPC_SPY_BEST2003_H__
#define __REG_MPC_SPY_BEST2003_H__

#include "plat_types.h"

struct HAL_MPC_SPY_T {
    __IO uint32_t REG_000;
    __IO uint32_t REG_004;
    __IO uint32_t REG_008;
    __IO uint32_t REG_00C;
    __IO uint32_t REG_010;
    __IO uint32_t REG_014;
    __IO uint32_t REG_018;
    __IO uint32_t REG_01C;
    __IO uint32_t REG_020;
    __IO uint32_t REG_024;
    __IO uint32_t REG_028;
    __IO uint32_t REG_02C;
};

// reg_00
#define MPC_SPY_MPC_CFG_NONSEC_BYPASS                       (1 << 0)
#define MPC_SPY_MPC_IRQ_EN_RD                               (1 << 1)
#define MPC_SPY_MPC_IRQ_EN_WR                               (1 << 2)
#define MPC_SPY_MPC_CFG_SEC_RESP                            (1 << 3)
#define MPC_SPY_MPC_CFG_INIT_VALUE                          (1 << 4)

// reg_04
#define MPC_SPY_REG_ENABLE0                                 (1 << 0)
#define MPC_SPY_REG_DETECT_READ0                            (1 << 1)
#define MPC_SPY_REG_DETECT_WRITE0                           (1 << 2)
#define MPC_SPY_REG_ENABLE1                                 (1 << 3)
#define MPC_SPY_REG_DETECT_READ1                            (1 << 4)
#define MPC_SPY_REG_DETECT_WRITE1                           (1 << 5)

// reg_08
#define MPC_SPY_REG_STR_ADDR0(n)                            (((n) & 0xFFFFFFFF) << 0)
#define MPC_SPY_REG_STR_ADDR0_MASK                          (0xFFFFFFFF << 0)
#define MPC_SPY_REG_STR_ADDR0_SHIFT                         (0)

// reg_0c
#define MPC_SPY_REG_END_ADDR0(n)                            (((n) & 0xFFFFFFFF) << 0)
#define MPC_SPY_REG_END_ADDR0_MASK                          (0xFFFFFFFF << 0)
#define MPC_SPY_REG_END_ADDR0_SHIFT                         (0)

// reg_10
#define MPC_SPY_REG_STR_ADDR1(n)                            (((n) & 0xFFFFFFFF) << 0)
#define MPC_SPY_REG_STR_ADDR1_MASK                          (0xFFFFFFFF << 0)
#define MPC_SPY_REG_STR_ADDR1_SHIFT                         (0)

// reg_14
#define MPC_SPY_REG_END_ADDR1(n)                            (((n) & 0xFFFFFFFF) << 0)
#define MPC_SPY_REG_END_ADDR1_MASK                          (0xFFFFFFFF << 0)
#define MPC_SPY_REG_END_ADDR1_SHIFT                         (0)

// reg_18
#define MPC_SPY_HIT_INT0                                    (1 << 0)
#define MPC_SPY_HIT_READ0                                   (1 << 1)
#define MPC_SPY_HIT_WRITE0                                  (1 << 2)
#define MPC_SPY_HIT_HMASTER0(n)                             (((n) & 0x7FFF) << 3)
#define MPC_SPY_HIT_HMASTER0_MASK                           (0x7FFF << 3)
#define MPC_SPY_HIT_HMASTER0_SHIFT                          (3)

// reg_1c
#define MPC_SPY_HIT_ADDR0_B(n)                              (((n) & 0xFFFFFFFF) << 0)
#define MPC_SPY_HIT_ADDR0_B_MASK                            (0xFFFFFFFF << 0)
#define MPC_SPY_HIT_ADDR0_B_SHIFT                           (0)

// reg_20
#define MPC_SPY_HIT_ADDR0_E(n)                              (((n) & 0xFFFFFFFF) << 0)
#define MPC_SPY_HIT_ADDR0_E_MASK                            (0xFFFFFFFF << 0)
#define MPC_SPY_HIT_ADDR0_E_SHIFT                           (0)

// reg_24
#define MPC_SPY_HIT_INT1                                    (1 << 0)
#define MPC_SPY_HIT_READ1                                   (1 << 1)
#define MPC_SPY_HIT_WRITE1                                  (1 << 2)
#define MPC_SPY_HIT_HMASTER1(n)                             (((n) & 0x7FFF) << 3)
#define MPC_SPY_HIT_HMASTER1_MASK                           (0x7FFF << 3)
#define MPC_SPY_HIT_HMASTER1_SHIFT                          (3)

// reg_28
#define MPC_SPY_HIT_ADDR1_B(n)                              (((n) & 0xFFFFFFFF) << 0)
#define MPC_SPY_HIT_ADDR1_B_MASK                            (0xFFFFFFFF << 0)
#define MPC_SPY_HIT_ADDR1_B_SHIFT                           (0)

// reg_2c
#define MPC_SPY_HIT_ADDR1_E(n)                              (((n) & 0xFFFFFFFF) << 0)
#define MPC_SPY_HIT_ADDR1_E_MASK                            (0xFFFFFFFF << 0)
#define MPC_SPY_HIT_ADDR1_E_SHIFT                           (0)

#endif
