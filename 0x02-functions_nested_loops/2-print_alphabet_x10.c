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
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
