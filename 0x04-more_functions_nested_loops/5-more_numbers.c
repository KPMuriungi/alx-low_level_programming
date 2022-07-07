#include "main.h"

/**
 * more_numbers - Function
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	char c;

	i = 0;

	while (i < 10)
	{
		for (c = 0 ; c < 15 ; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0')
			}
		_putchar(j % 10 + '0')
		}
		_putchar('\n');
		i++;
	}
}
