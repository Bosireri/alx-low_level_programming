#include "main.h"

int _strlen(char *s);

/**
 * _strncat - entry point
 *
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: length of source variable
 * Return: dest (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = _strlen(dest);
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[l + a] = src[a];
	}
	dest[l + a] = '\0';
	return (dest);
}

/**
 * _strlen - called function
 * @s: pointer to function
 * Return: i (success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
