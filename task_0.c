#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * task_char_0 - Entry point
 * @character: param
 * @ap: param
 *
 */

void task_char_0(int character, va_list ap)
{
	character = va_arg(ap, int);
	if (character)
		_putchar(character);
}

/**
 * task_string_0 - Entry point
 * @string: param
 * @ap: param
 *
 */

void task_string_0(char *string, va_list ap)
{
	string = va_arg(ap, char *);
	if (string)
	{
		while (*string)
		{
			_putchar(*string++);
		}
	}
}
