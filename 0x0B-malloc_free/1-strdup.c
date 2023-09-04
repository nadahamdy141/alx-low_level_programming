#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - create a array
 * @str: size array
 *
 *Return: Always 0.
 */

char *_strdup(char *str)
{
	char *ptr;
	int size, size2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{}
	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (size2 = 0; size > size2; size2++)
	{
		ptr[size2] = str[size2];
	}

	ptr[size2] = '\0';

	return (ptr);
}
