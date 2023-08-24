#include "main.h"
/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int s count, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/*  scan through string */
	s Count = 0;
	while (s[s Count] != '\0')
/* check whether leetLetter is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[s Count])
			{
				s[s Count] = leetNums[leetCount];
			}
			leetCount++;
		}
		s Count++;
	}
	return (s);
}i
