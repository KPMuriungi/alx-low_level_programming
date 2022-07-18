#include "main.h"
#include <stddef.h>

/**
 * *_strstr - function that copies the n bytes from memory area src to dest
 *
 * @haystack: String pointer
 *
 * @needle: String pointer
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
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
