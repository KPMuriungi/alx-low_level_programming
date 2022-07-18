#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - function that copies the n bytes from memory area src to dest
 *
 * @s: String pointer
 *
 * @accept: String pointer
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			return (NULL);
		}
	}
	return (0);
}
