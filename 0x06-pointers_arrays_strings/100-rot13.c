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

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot13_lower[j] != '\0' && rot13_upper[j] != '\0'; j++)
		{
			if (str[i] == rot13_lower[j] || str[i] == rot13_upper[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = rot13_shifted[j];
				else
					str[i] = rot13_shifted[j] - 32;
				break;
			}
		}
	}

	return (str);
}
