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
#ifndef __USB_BT_H__
#define __USB_BT_H__
#include "hal_usb.h"
#include "stdint.h"
int usbbt_open(void);
bool usbbt_bulk_send_compl_handler(const uint8_t *data, uint32_t length, enum XFER_COMPL_STATE state);
bool usbbt_bulk_recv_compl_handler(const uint8_t *data, uint32_t length, enum XFER_COMPL_STATE state);
#endif