#include "main.h"

/**
 * *_memcpy - function that copies the n bytes from memory area src to dest
 *
 * @dest: String pointer
 *
 * @src: String pointer
 *
 * @n: Parameter
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
