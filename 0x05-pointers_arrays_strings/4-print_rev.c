#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */

void print_rev(char *s)
{
	if (s != NULL)
	{
		int length = 0;

		/* Calculate the length of the string */
		while (s[length] != '\0')
			length++;

		/* Print the string in reverse order */
		for (int i = length - 1; i >= 0; i--)
			_putchar(s[i]);

		_putchar('\n');
	}
}
