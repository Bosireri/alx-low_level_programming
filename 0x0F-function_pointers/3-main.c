#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: arg 1 (number of args)
 * @argv: arg 2 (pointer to array holding args)
 *
 * Return: 0 always (success) 0r other to indicate error
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int num1, num2, calc;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);

	printf("%d\n", calc);

	return (0);
}
