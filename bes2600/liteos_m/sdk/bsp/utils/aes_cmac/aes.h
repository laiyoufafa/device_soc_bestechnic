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
#ifndef AES_H
#define AES_H

#include "common.h"

// Main Functions
unsigned char* aes_128_encrypt(const unsigned char* in, unsigned char* out, const unsigned char* key);
unsigned char* aes_128_decrypt(const unsigned char* in, unsigned char* out, const unsigned char* key);
unsigned char* aes_192_encrypt(const unsigned char* in, unsigned char* out, const unsigned char* key);
unsigned char* aes_192_decrypt(const unsigned char* in, unsigned char* out, const unsigned char* key);
unsigned char* aes_256_encrypt(const unsigned char* in, unsigned char* out, const unsigned char* key);
unsigned char* aes_256_decrypt(const unsigned char* in, unsigned char* out, const unsigned char* key);

// The Cipher
void Cipher(const unsigned char* in, unsigned char* out, unsigned char* w, unsigned char Nk, unsigned char Nr);
void InvCipher(const unsigned char* in, unsigned char* out, unsigned char* w, unsigned char Nk, unsigned char Nr);

// KeyExpansion
void KeyExpansion(const unsigned char* key, unsigned char* w, unsigned char Nk, unsigned char Nr);
unsigned char* SubWord(unsigned char* word);
unsigned char* RotWord(unsigned char* word);

// Round Ops
void SubBytes(unsigned char state[4][4]);
void ShiftRows(unsigned char state[4][4]);
void MixColumns(unsigned char state[4][4]);
void AddRoundKey(unsigned char state[4][4], unsigned char* key);
unsigned char mul(unsigned char a, unsigned char b);

// Inv Round Ops
void InvSubBytes(unsigned char state[4][4]);
void InvShiftRows(unsigned char state[4][4]);
void InvMixColumns(unsigned char state[4][4]);
void InvAddRoundKey(unsigned char state[4][4], unsigned char* key);

#endif // !AES_H
