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
#ifndef __A2DP_CODEC_OPUS_H__
#define __A2DP_CODEC_OPUS_H__

#if defined(__cplusplus)
extern "C" {
#endif

#include "avdtp_api.h"
#include "btapp.h"

#if defined(MASTER_USE_OPUS) || defined(ALL_USE_OPUS)
bt_status_t a2dp_codec_opus_init(int index);
#endif

#if defined(__cplusplus)
}
#endif

#endif /* __A2DP_CODEC_OPUS_H__ */