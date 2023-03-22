#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return: (Success)
 */

int main(void)
{
	int a = 1, b = 2, c, count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		count++;
	}

	printf("%d\n", a + b);
	return (0);
}
