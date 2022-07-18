#include "main.h"
#include <stddef.h>

/**
 * *_strchr - function that copies the n bytes from memory area src to dest
 *
 * @s: String pointer
 *
 * @c: String pointer
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i, n;

	i = 0;
	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;

	while (i < n)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
