#include "main.h"

/**
 *  _strlen - finds length of a string
 *
 * @s: String pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
