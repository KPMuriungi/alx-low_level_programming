#include "main.h"

/**
 * strlength - Prints the length of a string
 *
 * @s: String pointer
 *
 * Return: Length of the string
 */

int strlength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (strlength(s + 1) + 1);
}

/**
 * check_palindrome - Checks for a palindrome
 *
 * @s: String pointer
 *
 * @a: Parameter
 *
 * @z: Parameter
 *
 * Return: 0
 */

int check_palindrome(char *s, int a, int z)
{
	if (s[a] != s[z])
	{
		return (0);
	}
	if (a >= z)
	{
		return (1);
	}
	if (s[a] == s[z])
	{
		return (check_palindrome(s, a + 1, z - 1));
	}
	return (0);
}

/**
 * is_palindrome - Recursive function
 *
 * @s: String pointer
 *
 * Return: 0
 */

int is_palindrome(char *s)
{
	int len, a, z;

	len = strlength(s);
	a = 0;
	z = len - 1;

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (check_palindrome(s, a, z));
}
