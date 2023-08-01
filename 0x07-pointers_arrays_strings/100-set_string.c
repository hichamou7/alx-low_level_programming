#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to the string to be encoded.
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *rot13_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_shifted = "nopqrstuvwxyzabcdefghijklm";
	int i, j;
	int is_letter;

	for (i = 0; str[i] != '\0'; i++)
	{
		is_letter = (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z');
		j = is_letter ? (str[i] & 32) ? str[i] - 'a' : str[i] - 'A' : 0;

		if (is_letter)
		{
			str[i] = (str[i] & 32) ? rot13_shifted[j] - 'a' + 'A' : rot13_shifted[j];
		}
	}

	return (str);
}
