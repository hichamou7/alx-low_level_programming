#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters in the terminal
 * @size: The size of the triangle
 *
 * Description: This function prints a triangle of '#' characters in the
 *              terminal. The size of the triangle is specified by 'size'.
 *              If 'size' is 0 or less, the function prints only a newline.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, col;

		for (row = 0; row < size; row++)
		{
			for (col = 0; col <= row; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
