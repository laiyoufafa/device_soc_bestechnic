# Copyright (c) 2021 Bestechnic (Shanghai) Co., Ltd. All rights reserved.
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
ifeq ($(KERNEL),RTX)
rtos_lib-y := rtx/TARGET_CORTEX_M/
else ifeq ($(KERNEL),RTX5)
rtos_lib-y := rtx5/
else ifeq ($(KERNEL),FREERTOS)
rtos_lib-y := freertos/
else ifeq ($(KERNEL),NUTTX)
rtos_lib-y := nuttx/
else ifeq ($(KERNEL),RTT)
rtos_lib-y := rt_thread/
KBUILD_CFLAGS += -Wno-error=date-time
else ifeq ($(KERNEL),LITEOS_M)
rtos_lib-y := liteos/liteos_m/
else ifeq ($(KERNEL),LITEOS_A)
rtos_lib-y := liteos/liteos_a/
else ifeq ($(KERNEL),RHINO)
ifeq ($(KERNEL_INTO_LIB),1)
rtos_lib-y := rhino/
else
rtos_lib-y :=
endif
ifeq ($(KERNEL),RHINO)
rtos_lib-y += rhino/cmsis/cmsis_os.o
rtos_lib-y += rhino/cmsis/cmsis_init.o
rtos_lib-y += rhino/cmsis/cmsis_os2.o
rtos_lib-y += rhino/cmsis/k_membox.o
endif
endif

ifeq ($(MBED),1)
rtos_lib-y += rtos/
endif

obj-y := rtos_lib.o
ifeq ($(KERNEL), RHINO)
ifneq ($(KERNEL_INTO_LIB),1)
obj-y += rhino/
endif
endif #rhino

subdir-ccflags-y += -Iplatform/cmsis/inc -Iplatform/hal -Iutils/hwtimer_list

