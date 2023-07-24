#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string to be printed.
 */

void puts2(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		/* Remove null-terminator from the string */
		while (str[i] != '\0')
			i++;

		str[i - 1] = '\0'; // Remove the null-terminator

		/* Print every other character */
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 2;
		}

		_putchar('\n');
	}
}
