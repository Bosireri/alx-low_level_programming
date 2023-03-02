#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpa;

	for (alpa = 'a' ; alpa <= 'z'; alpa++)
	{
		if (alpa == 'e' || alpa == 'q')
		{
			continue;
		}
	putchar(alpa);
	}
	putchar('\n');
	return (0);
}
