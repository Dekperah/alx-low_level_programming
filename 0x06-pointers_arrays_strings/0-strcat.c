#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src,
 * including the terminating
 *  null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int d = 0, dest_len = 0;

	while (dest[d++])
		dest_len++;

	for (d = 0; src[d]; d++)
		dest[dest_len++] = src[d];

	return (dest);
}
