#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Entry point
 * @fmt: param
 *
 * Return: Always 0 (Success)
 */

int _printf(const char *fmt, ...)
{
	char *string;
	va_list ap;
	int c;

	c = 0;
	string = NULL;

	va_start(ap, fmt);
	for (; *fmt; fmt++)
	{
		if (*fmt != '%')
		{
			_putchar(*fmt);
			continue;
		}
		switch (*++fmt)
		{
		case 'c':
			task_char_0(c, ap);
			break;
		case 's':
			task_string_0(string, ap);
			break;
		}
	}
	va_end(ap);
	return (0);
}
