#include "main.h"

/**
 * swap_in - Swaps the values of two integers.
 * @author Anisah
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
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
