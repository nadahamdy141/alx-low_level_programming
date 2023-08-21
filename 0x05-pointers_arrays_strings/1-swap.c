#include "main.h"

/**
 * swap_int - swap the value of two integers.
 * using two parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: non
 *
 */

void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
