#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with Fizz, Buzz, or FizzBuzz conditions
 *
 * Description: This program prints the numbers from 1 to 100, inclusive.
 *              However, for multiples of three, it prints "Fizz" instead
 *              of the number. For multiples of five, it prints "Buzz."
 *              For numbers that are multiples of both three and five,
 *              it prints "FizzBuzz." All output is separated by tabs.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
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
