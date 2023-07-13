#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message "and that piece of art is useful"
 *              - Dora Korpar, 2015-10-19 to the standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, ";
	const char *date = "2015-10-19\n";
	int message_len = strlen(message);
	int date_len = strlen(date);

	write(2, message, message_len);
	write(2, date, date_len);

	return (1);
}

