#include "main.h"

/**
 *print_alphabet_x10-function that will print alphabet 10x
 *
 *Description: prints alphabets usin prototype
 *
 *Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i;
	char p;

	for (i = 0; i < 10; ++i)
		print_alphabet();
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
