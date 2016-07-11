#pragma once

#include <pebble.h>

/*********************    SHA-256 Hashing   *************************/
/* Author:     Brad Conte (brad AT bradconte.com)                   */
/* Source:     https://github.com/B-Con/crypto-algorithms/          */
/********************************************************************/

typedef struct {
	uint8_t data[64];
	uint32_t datalen;
	unsigned long long bitlen;
	uint32_t state[8];
} SHA256_CTX; 

void sha256_init(SHA256_CTX *ctx);
void sha256_update(SHA256_CTX *ctx, const uint8_t data[], size_t len);
void sha256_final(SHA256_CTX *ctx, uint8_t hash[]);
