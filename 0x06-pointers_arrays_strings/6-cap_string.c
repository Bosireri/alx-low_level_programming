#include "main.h"

/**
 * cap_string - entry point
 *
 * @s: string pointer
 * Return: nothing (success)
 */

char *cap_string(char *s)
{
	int i, t = 0;
	int punc[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (s[t] <= 122 && s[t] >= 97)
		s[t] = s[t] - 32;
	t++;
	while (s[t] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[t] == punc[i])
			{
				if (s[t + 1] >= 97 && s[t + 1] <= 122)
					s[t + 1] = s[t + 1] - 32;
				break;
			}
		}
		t++;
	}
	return (s);
}
