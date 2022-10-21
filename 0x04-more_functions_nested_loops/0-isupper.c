#include <stdio.h>
#include "main.h"

/**i
*print_remaining_days - takes a date and prints how many ar*e in the year, taking leap years into account 
*@month: month in number format
*@day: day of month
*@year: year
*Return: void
*/

void print_remaining_days(int month,int day, int year)
{
	if(year % 4 == 0 || (year % 400 == 0 && year % 100
				== 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}

		printf(“Day of the year: %d\n”, day);
		print(“Remaining days: %d/n“, 366 - day);
                }
         }
}
