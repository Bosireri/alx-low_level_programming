#include "main.h"

/*Declaration Helper function*/
int is_sqrt(int n, int m);

/**
 * _sqrt_recursion- entry point
 *
 * @n: integer variable
 * Return: square root of n or -1 (!Perfect sqrt)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_sqrt(n, n / 2));
}

/**
 *is_sqrt - helper function
 *
 * @n: integer variable to be checked
 * @m: integer variable (n/2)
 * Return: square root or -1 (!Perfect sqrt)
 */
int is_sqrt(int n, int m)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (m < 1)
		return (-1);
	else if (m * m == n)
		return (m);
	return (is_sqrt(n, m - 1));
}

