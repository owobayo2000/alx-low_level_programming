#include "main.h"

/**
 * factorial - Function that returnd the factorial of given number
 * @n: int of the factorial
 * Return: int
 */

int factorial(int n)
{
	int a;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		a = n * factorial(n - 1);
	}
	return (a);
}
