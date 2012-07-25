/*
* CS50 / pset1 / Pennies
* Alec Peden (alec.peden@gmail.com)
*/

#include <cs50.h>
#include <stdio.h>

int
main(void)
{
	int days;
	int pennies;
	// ask for how many days n the month
	// and check for valid days
    do
    {
    	printf("Days in Month: ");
    	days = GetInt();
    }
    while (days < 28 || days > 31);

	// ask how many pennies on the first day
	// and make sure the number is a postive number
    do
    {
    	printf("Pennies on First Day: ");
    	pennies = GetInt();
    }
    while (pennies <= 0);



long long total = 0;
for (int i = 0; i < days; i++)
{
	total += pennies;
	pennies *= 2;
}
double dollar = (double)total / 100;
printf("You just made $%.2f\n", dollar);

}


