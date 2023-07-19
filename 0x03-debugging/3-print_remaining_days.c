#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are
 *                        left in the year, taking leap years into account.
 * @month: Month in number format.
 * @day: Day of the month.
 * @year: Year.
 *
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int total_days = 365;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		total_days = 366;

	if (month == 2 && day > 29)
	{
	    	printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (month >= 2 && day >= 60 && total_days == 365)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", total_days - day);
}
