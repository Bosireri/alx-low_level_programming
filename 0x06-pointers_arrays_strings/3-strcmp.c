#include "main.h"

int _strlen(char *s);

/**
 * _strcmp - entry point
 *
 * @s1: string pointer 1
 * @s2: string pointer 2
 * Return: 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int l = _strlen(s1);
	int k = _strlen(s2);
	int a;

	for (a = 0; a < l && a < k; a++)
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	return (0);
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
