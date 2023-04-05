#include "main.h"

/**
 * memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: char to copy
 * @n: number of bytes to be changed
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[1] = b;
	}
	return (s);
}
