#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * task_bin - Entry point
 * @nums: param
 * @ap: param
 *
 */

void task_bin(int nums, va_list ap)
{
	if (nums)
	{
		task_bin(nums / 2, ap);
		_putchar('0' + nums % 2);
	}
}
