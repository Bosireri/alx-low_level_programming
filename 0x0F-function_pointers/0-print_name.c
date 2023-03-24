#include "function_pointers.h"

/**
 * print_name - entry point
 *
 * @name: arg 1 (pointer to name)
 * @f: arg 2 (pointer to function)
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
