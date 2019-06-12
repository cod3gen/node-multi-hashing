#ifndef JHA_H
#define JHA_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void jh_hash_i(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
