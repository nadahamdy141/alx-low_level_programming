#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers 0 to 9.
 * Return: nothing.
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
}
