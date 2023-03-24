#include "function_pointers.h"

/**
 * array_iterator - entry point
 *
 * @array: arg 1 (pointer to array)
 * @size: arg 2 (size of array)
 * @action: arg 3 (pointer to array)
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
