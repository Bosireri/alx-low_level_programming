#include "main.h"

int checkPrime(int n, int i);

/**
 * is_prime_number - entry point
 *
 * @n: integer variable
 * Return: Always 0 (success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (checkPrime(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * checkPrime - helper function
 * @n: int
 * @i: int
 * Return: Prime number
 */
int checkPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (checkPrime(n, i - 1));
}

