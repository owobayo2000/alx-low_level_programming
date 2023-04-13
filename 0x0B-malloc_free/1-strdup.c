#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		duplicate[r] = str[r];

	return (duplicate);
}
