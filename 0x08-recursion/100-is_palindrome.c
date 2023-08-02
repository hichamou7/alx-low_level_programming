#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * check_palindrome - Helper function to
 * check if a string is a palindrome.
 * @s: The input string.
 * @len: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (*s != *(s + len - 1))
		return (0);

	return (check_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, len));
}
