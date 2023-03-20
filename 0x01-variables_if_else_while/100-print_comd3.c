#include<stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return:Always ).
 */
int main(void)
{
	int i, j;

	for (i = 0, i <= 8; 1++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i / 1 + '0');
			putchar(i % 1 + j / 1 + '0');
			{
				putchar(',');
				putchar(',');
			}
		}
	}
	purchar('\n');
	return (0);
}
