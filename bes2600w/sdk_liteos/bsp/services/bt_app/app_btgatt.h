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
#ifndef __APP_BTGATT_H__
#define __APP_BTGATT_H__

#define ATT_SERVICE_UUID 0x0118
#ifdef __cplusplus
extern "C" {
#endif
void app_btgatt_init(void);
void app_btgatt_addsdp(uint16_t pServiceUUID, uint16_t startHandle, uint16_t endHandle);

#ifdef __cplusplus
}
#endif

#endif

