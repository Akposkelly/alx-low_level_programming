#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: array of integers to iterate
 * @size: size of array
 * @action: pointer to action to perform
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
