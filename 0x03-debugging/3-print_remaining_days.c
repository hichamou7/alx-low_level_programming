#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int total_days;

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	total_days = convert_day(month, day);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2)
		{
			total_days++;
		}
	}

	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		printf("Day of the year: %d\n", total_days);
		printf("Remaining days: %d\n", 366 - total_days);
	}
	else
	{
		printf("Day of the year: %d\n", total_days);
		printf("Remaining days: %d\n", 365 - total_days);
	}
}
