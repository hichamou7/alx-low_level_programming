#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be capitalized.
 * Return: Pointer to the capitalized string.
 */

char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize first letter if it is a lowercase letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;

	while (str[i] != '\0')
	{
		/* Check for word separators and capitalize the next letter if lowercase */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			i++;
		}
	}

	return (str);
}
