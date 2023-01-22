#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Entry point
 * @fmt: param
 *
 * Return: Always 0 (Success)
 */

int _strlen(const char *fmt)
{
	int count;

	count = 0;

	while (*fmt++)
		count++;
	return (count);
}
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
	int c, len;
	size_t bin;

	c = 0, bin = 0;
	string = NULL;
	len = _strlen(fmt);

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
		case 'b':
			bin = va_arg(ap, size_t);
			task_bin(bin, ap);
			break;
			/*
			 * case 'p':
			 *	addr = va_arg(ap, void *);
			 *	task_ptr(addr, ap);
			 *	break;
			 */
		}
	}
	va_end(ap);
	return (len);
}
