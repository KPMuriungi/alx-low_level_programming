#include "main.h"

/**
 *  reverse_array - reverses an array
 *
 * @a: array pointer
 *
 * @n: parameter
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < (n - 1); i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
