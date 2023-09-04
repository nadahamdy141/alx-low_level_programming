#include "main.h"

/**
 *create_array-creates an array of charachter
 *initialize it with a specific charachter
 *@size:size of the array
 *@c: charachter to initialize
 *Return: pointer to array 
 */
char *create_array(unsigned int size, char c)
{
	int a;
	char *arr;

	if (size == 0)
		return (Null);

	arr = malloc(sizeof(char) * size);

	if (arr == Null)
		return (Null);

	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);
}

