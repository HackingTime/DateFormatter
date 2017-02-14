#include <stdio.h>
#include <stdlib.h>

int main()
{
    //set ints

    int day, month, year;
//print prompt

printf("Enter a date (mm/dd/yyyy):");

    //Read date
    scanf("%d/%d/%d", &month, &day, &year);

    //print the date
    printf("You entered the date: %04d%02d%02d", year, month, day);

    return 0;
}
