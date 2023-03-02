#include "main.h"

/**
 * string_toupper - entry point
 *
 * @ac: string pointer
 * Return: nothing (success)
 */

char *string_toupper(char *ac)
{
	int i;

	for (i = 0; ac[i] != '\0'; i++)
	{
		if (ac[i] <= 122 && ac[i] >= 97)
			ac[i] = ac[i] - 32;
	}
	return (ac);
}
