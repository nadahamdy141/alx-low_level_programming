#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers from 0 to 14, 10 times.
 * Return: nothing.
 */
void more_numbers(void)
{
	int t, nums;

	for (t = 0; t < 10; t++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums >= 10)
				putchar((nums / 10) + '0');

			putchar((nums % 10) + '0');
		}
		putchar('\n');
	}
}
