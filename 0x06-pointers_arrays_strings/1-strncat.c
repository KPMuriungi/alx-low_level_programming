#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: String pointer
 *
 * @src: String point
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
