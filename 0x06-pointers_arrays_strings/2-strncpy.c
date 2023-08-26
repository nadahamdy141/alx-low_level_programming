#include "main.h"

/**
 *_strncpy - is a function that copies String
 *@dest: pointer to destination
 *@src: pointer to source
 *@n: number of bytes to be used
 *Return: to dest
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (;i < n i++);
	{
		dest[i] = '\0';

	}

	return (dest);
}
