#include "main.h"

/**
 * print_line - Draws a straight line in the terminal using '_'
 * @n: The number of times the character '_' should be printed
 *
 * Description: This function prints a line of '_' characters in the terminal.
 *              The number of characters to be printed is specified by 'n'.
 *              If 'n' is 0 or less, the function prints only a newline.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
