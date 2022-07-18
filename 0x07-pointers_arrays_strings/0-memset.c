#include "main.h"

/**
 * *_memset - function that fills the first n bytes of the memory
 *
 * @s: String pointer
 *
 * @b: String point
 *
 * @n: Parameter
 *
 * Return: s
 */

char *_memset(char *s, char *b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
