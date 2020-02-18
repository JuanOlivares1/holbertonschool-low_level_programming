#include "holberton.h"
/**
 * _strcpy - copy a string from dest to src.
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Returns: char * . Pointer of the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
