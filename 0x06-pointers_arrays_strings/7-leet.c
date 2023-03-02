#include "main.h"

/**
 * leet - entry point
 *
 * @s: string pointer
 * Return: nothing (success)
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char key[] = {97, 101, 111, 116, 108, 65, 69, 79, 84, 76};
	char code[] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == key[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}
	return (s);
}
