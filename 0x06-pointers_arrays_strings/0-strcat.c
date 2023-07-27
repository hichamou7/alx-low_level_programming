#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to the string.
 * Return: Length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0'; // Add the terminating null byte at the end

	return (dest);
}
