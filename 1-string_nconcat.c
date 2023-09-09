#include <stdlib.h>

/**
 * string_nconcat - fuction that concats two strings but with s2 by n amount.
 * @s1: base sting to concat to. `Null` will return as empty.
 * @s2: string to copy from. 'NULL' will return as empty string.
 * @n: amount of s2 to copy.
 * Return: pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l, a, b;

	a = b = 0;
	if (s1)
		for (; s1[a]; a++)
			;
	if (s2)
		for (; s2[b]; b++)
			;
	if (!(n >= b))
		b = n;

	str = malloc(sizeof(char) * (a + b) + 1);
	if (!str)
		return (NULL);

	for (l = 0; l < (a + b); l++)
	{
		if (l < a)
			str[l] = s1[l];
	else
			str[l] = s2[l - a];
	}

	str[l] = '\0';

	return (str);
}


