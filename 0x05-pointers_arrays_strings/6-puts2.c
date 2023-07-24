#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string to be printed.
 */

void puts2(char *str)
{
	if (str == NULL)
		return;

	char tmp[1000];
	int i, j;

	/* Copy characters from str to tmp until null-terminator is found */
	for (i = 0, j = 0; str[i] != '\0'; i += 2)
	{
		tmp[j++] = str[i];
	}
	tmp[j] = '\0';

	/* Loop to print every character in tmp */
	for (i = 0; tmp[i] != '\0'; i++)
	{
		_putchar(tmp[i]);
	}

	_putchar('\n');
}
