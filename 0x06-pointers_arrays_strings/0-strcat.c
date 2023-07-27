#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: Pointer to the resulting string (dest).
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest; /* Save the original destination pointer */

	/* Move the destination pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy characters from src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Add a null terminator at the end of the concatenated string */

	return (original_dest);
