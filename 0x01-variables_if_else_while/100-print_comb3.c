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

for (i = 10; i <= 19; i++)
{
for (h = 10; h <= 19; h++)
{
if ((h % 10) > (i % 10))
{
putchar((i % 10) + '0');
putchar((h % 10) + '0');
if (i != 18 || h != 19)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
