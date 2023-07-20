#include <stdio.h>

/**
 * main - Entry point of the Fizz-Buzz program
 *
 * Description: This function prints the numbers from 1 to 100, following
 *              the Fizz-Buzz rules. Multiples of three are replaced with
 *              "Fizz", multiples of five with "Buzz", and multiples of
 *              both three and five with "FizzBuzz". Each number or word
 *              is separated by a space, and a newline is printed at the end.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");
	return (0);
}
