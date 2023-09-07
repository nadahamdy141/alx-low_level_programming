#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - fuction that allocates memory and also checks if sucessful
 * @b: size of memory to allocate.
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *j

	j = malloc(b);
	if (j == NULL)
	{
		free(j);
		exit(98);
	}
	return (j);
}


