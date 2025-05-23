#ifndef PRINTF_H
#define PRINTF_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void putc(char c);
void puts(const char *s);
char getc(void);
void getlines(char *restrict buffer, size_t length);

#ifdef __cplusplus
}
#endif

#endif // PRINTF_H
