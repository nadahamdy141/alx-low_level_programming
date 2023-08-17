#include "main.h"
#include <stdio.h>

/**
 * print_line - Drawing straight lines.
 * @n: How long the line would be.
 * Return: Nothing.
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n ; a++)
	{
		putchar('_');
	}
	putchar('\n');
}
