#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 * @n: Maximum number of bytes to be copied.
 * Return: Pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill the remaining bytes with null bytes if n is greater than src length */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
