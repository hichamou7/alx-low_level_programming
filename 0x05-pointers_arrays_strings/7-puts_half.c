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
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 */

void puts_half(char *str)
{
	if (str != NULL)
	{
		int length = _strlen(str);
		int start = (length - 1) / 2;
		int i;

		for (i = start; i < length; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
