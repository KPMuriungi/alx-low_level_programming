#include "main.h"

/**
 * *_strncpy - concatenates two strings
 *
 * @dest: String pointer
 *
 * @src: String pointer
 *
 * @n: parameter
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
