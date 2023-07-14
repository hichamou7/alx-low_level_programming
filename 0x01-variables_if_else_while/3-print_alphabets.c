#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, followed by uppercase,
 *              using the putchar function.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

