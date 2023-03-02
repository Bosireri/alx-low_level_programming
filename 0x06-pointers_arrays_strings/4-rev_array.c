#include "main.h"

/**
 * reverse_array - entry point
 *
 * @a: string pointer
 * @n: integer
 * Return: nothing (success)
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
	}
}
