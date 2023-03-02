#include "main.h"

/**
 * rot13 - entry point
 *
 * @s: string pointer
 * Return: nothing (success)
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char key[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
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
