#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: The string to search
 * @accept: The set of bytes to accept in the prefix substring
 *
 * Return: The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (n);
		}
	}
	return (n);
}
