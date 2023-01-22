#include "main.h"
#include <stdio.h>

/**
 * task_char_0 - Entry point
 * @character: param
 * @ap: param
 *
 */

void task_char_0(int character)
{
	_putchar(character);
}

/**
 * task_string_0 - Entry point
 * @string: param
 * @ap: param
 *
 */

void task_string_0(char *string)
{
	while (*string)
	{
		_putchar(*string++);
	}
}
