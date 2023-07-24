#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Return: Length of the string (excluding the null-terminator).
 */

int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
	}

	return (length);
}
