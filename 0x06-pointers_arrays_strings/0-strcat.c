#include "main.h"

/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int a, j;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[a] = src[j];
		i++;
	}
	return (dest);
}
