#include "main.h"

/**
 * _pow_recursion - entry point
 *
 * @x: integer variable
 * @y: integer variable
 * Return: power of x^y or x^1 or x^0 or -1 != +y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}

