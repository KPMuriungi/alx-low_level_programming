#include <stdio.h>

/**
 * print_to_98 - adds two parameters
 *
 * @n: Parameter
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	else if (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	else if (n == 98)
	{
		printf("%d\n", n);
}
