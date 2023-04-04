#include "main.h"

/**
 * _memcpy - entry point
 * @dest: pointed destination
 * @src: constant byte
 * @n: bytes
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = *src;

	return (dest);
}
