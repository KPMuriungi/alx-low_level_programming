#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 *
 * @s: String pointer
 *
 * Return: Lnght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
