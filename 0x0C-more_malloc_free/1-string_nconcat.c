#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tr, *empt;
	unsigned int r, len, j;
	unsigned int size;

	len = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*tr);
	tr = malloc(size + 1);
	if (tr == NULL)
		return (NULL);
	r = 0;
	while (r < size && s1[r] != '\0')
	{
		tr[r] = s1[r];
		r++;
	}
	j = 0;
	while (r < size && s2[j] != '\0')
	{
		tr[r] = s2[j];
		r++;
		j++;
	}
	tr[r] = '\0';
	return (tr);
}
