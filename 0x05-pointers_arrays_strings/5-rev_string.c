#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	if (s != NULL)
	{
		int length = 0;
		int start = 0;
		char temp;

		/* Calculate the length of the string */
		while (s[length] != '\0')
			length++;

		/* Reverse the string in place */
		for (start = 0; start < length / 2; start++)
		{
			temp = s[start];
			s[start] = s[length - 1 - start];
			s[length - 1 - start] = temp;
		}
	}
}
