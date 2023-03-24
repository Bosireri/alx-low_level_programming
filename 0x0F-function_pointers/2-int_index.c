#include "function_pointers.h"

/**
 * int_index - entry point
 *
 * @array: arg 1 (pointer to array)
 * @size: arg 2 (size of array)
 * @cmp: arg 3 (pointer to array)
 *
 * Return: i (if found) or -1 (if not found or size <= 0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
