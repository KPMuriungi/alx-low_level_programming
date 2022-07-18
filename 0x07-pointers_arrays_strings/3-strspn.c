#include "main.h"

/**
 * _strspn - function that copies the n bytes from memory area src to dest
 *
 * @s: String pointer
 *
 * @accept: String pointer
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n;

	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
			if (accept[j] == '\0')
			{
				return (n);

			}
		}
	}
	return (n);
}
