#include "main.h"

/**
 * _strncpy - entry point
 *
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: length of source variable
 * Return: dest (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
