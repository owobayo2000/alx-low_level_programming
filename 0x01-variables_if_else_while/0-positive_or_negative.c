#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: print numder stored in the variable n is positive or negative
 * Return: Zero value to succesful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() % 201 - 100;

	printf("%d\n", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
