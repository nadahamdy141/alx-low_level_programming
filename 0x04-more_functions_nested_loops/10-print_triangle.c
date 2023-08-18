#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print a triangle.
 * @size: How big the triangle would be.
 * Return: nothing.
 */
void print_triangle(int size)
{
	int a, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (l = 1; l <= size; l++)
		{
			if (l <= (size - a))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
