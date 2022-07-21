#include "main.h"

/**
 * check_prime - checks for prime numbers
 *
 * @num: square integer
 *
 * @x: integer
 *
 * Return: 0 or 1
 */

int check_prime(int num, int x)
{
	if (num % x == 0 && x > 1)
	{
		return (0);
	}
	return (check_prime(num, x + 1));
}

/**
 * is_prime_number - returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int y;

	y = 1;

	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, y));
}
