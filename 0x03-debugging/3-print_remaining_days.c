#include <stdio.h>
#include "main.h"
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
if (month < 1 || month > 12 || day < 1 || day > days_in_month[month]) {
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
int day_of_year = day;
for (int i = 1; i < month; i++) {
day_of_year += days_in_month[i];
if (i == 2 && leap_year) {
day_of_year += 1;
}
} 
int remaining_days = 365 + leap_year - day_of_year;
if (remaining_days == 0) {
printf("Happy New Year!\n");
} else if (remaining_days == 1) {
printf("Tomorrow is New Year's Eve!\n");
} else {
printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", remaining_days);
}
}
