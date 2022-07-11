#include <stdio.h>
#include "main.h"

/**
 *  _puts - prints an array
 *
 * @a: Array pointer
 *
 * @n: Parameter
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
