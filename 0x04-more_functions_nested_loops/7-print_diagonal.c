#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draw a diagonal line on the terminal.
 * @n: How diagonal the line would be.
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
