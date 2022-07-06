#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @i: Parameter
 *
 * Return: 0
 */

int print_last_digit(int i)
{
	int n = i % 10;

	if (i < 0)
	{
		n = (-1) * n;
	}
	_putchar(n + '0');
	return (n);
}
