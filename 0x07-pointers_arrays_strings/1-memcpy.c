#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @n: pointed destination
 * @src: bytes from memory area
 * @dest: pointed to memory destination
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
