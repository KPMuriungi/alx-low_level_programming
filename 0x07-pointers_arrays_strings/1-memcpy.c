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

char *_memcpy(char *dest, char src, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		src[i] = dest[i];
		i++;
		n--;
	}
	return (dest);
}
