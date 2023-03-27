#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @author Anisah
 * @a: pointer to first value
 * @b: pointer to second value
 *
 * This function swaps the values of the integers pointed to by a and b.
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
