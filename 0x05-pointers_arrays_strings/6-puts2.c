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

		/* Print every other character until the null-terminator */
		while (str[i] != '\0')
		{
			if (i % 2 == 0)
				_putchar(str[i]);
			i += 1;
		}
	}

	_putchar('\n');
}
