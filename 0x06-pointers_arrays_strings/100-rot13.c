#include "main.h"

/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int n = 0;
	int j;

	while (*(s + n) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(s + n) == n[j])
			{
				*(s + n) = rot[j];
				break;
			}
		}
		n++;
	}
	return (s);
}
