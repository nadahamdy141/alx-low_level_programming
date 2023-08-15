#include "main.h"

/**
 *print_alphabet_x10-function that will print alphabet 10x
 *
 *Description: prints alphabets using prototype
 *
 *Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		print_alphabet(i);
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
