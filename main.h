#ifndef _PRINTF_
#define _PRINTF_
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *fmt, ...);
void task_char_0(int character, va_list ap);
void task_string_0(char *string, va_list ap);
int _putchar(int c);
#endif
