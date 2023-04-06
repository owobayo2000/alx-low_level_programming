#include "main.h"

/**
 * check - checks for the square root
 * @a: int
 * @b: int
 *
 * Return: int
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - Function that returns the natural square root
 * of a number
 * @n: intger of the square root to find
 *  Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
