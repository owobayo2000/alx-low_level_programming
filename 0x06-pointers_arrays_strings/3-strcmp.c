#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to the first strings
 * @s2: pointer to the second strings
 * Return: value less than 0 if string is less than the others,
 * value greater than the others, value greater than 0
 * if string is greater than the others & 0 if strings are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
