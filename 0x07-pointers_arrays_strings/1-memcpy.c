#include "main.h"
/**
 * _memcpy - function that copies memory area
 *@dest: the address of memory to print
 *@src: second value
 *@n: thirth value
 *
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ii;

	for (ii = 0; ii < n; ii++)
	{
		dest[ii] = src[ii];
	}
	return (dest);
}
