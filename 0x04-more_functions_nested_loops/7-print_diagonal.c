#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal using '\'
 * @n: The number of times the character '\' should be printed
 *
 * Description: This function prints a diagonal line of '\' characters
 *              in the terminal. The number of characters to be printed
 *              is specified by 'n'. If 'n' is 0 or less, the function
 *              prints only a newline.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int spaces = 0;

		while (n > 0)
		{
			int i;

			for (i = 0; i < spaces; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			spaces++;
			n--;
		}
	}
}
