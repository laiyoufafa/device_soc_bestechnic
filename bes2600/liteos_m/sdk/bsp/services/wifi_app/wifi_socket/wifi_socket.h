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
#ifndef  __WIFI_SOCKET_H__
#define  __WIFI_SOCKET_H__

#ifdef __cplusplus
extern "C" {
#endif

struct WIFI_SOCKET_C
{
    uint8_t wifi_socket_ip[32];
    uint32_t wifi_socket_port;
};

int wifi_socket_start(struct WIFI_SOCKET_C *wifisocket);

void set_wifi_audio_state(bool wifi_audio_state);

#ifdef __cplusplus
}
#endif
#endif