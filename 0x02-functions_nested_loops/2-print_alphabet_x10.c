#include <stdio.h>

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int i, j;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0, c = 'a'; j < 26; j++, c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
