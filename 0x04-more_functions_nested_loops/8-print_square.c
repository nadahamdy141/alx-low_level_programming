#include "main.h"

/**
 * print_square - Print square.
 * @size: Size of square.
 * Return: Nothing.
 */

void print_square(int size)
{
	int a, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
