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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
