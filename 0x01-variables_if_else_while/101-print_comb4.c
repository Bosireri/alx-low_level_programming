#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	int h;
	int j;

for (i = 100; i <= 109; i++)
{
for (h = 100; h <= 109; h++)
{
for (j = 100; j <= 109; j++)
{
if ((j % 100) > (h % 100) && (h % 100) > (i % 100))
{
putchar((i % 100) + '0');
putchar((h % 100) + '0');
putchar((j % 100) + '0');
if (i != 107 || h != 108 || j != 109)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
