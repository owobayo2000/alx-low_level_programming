#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - prints each elem on new!
 * @array: array
 * @size: how many elem to print
 * @acti0n: pointer to rint in regular or hex
 *
 * Return:void:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
