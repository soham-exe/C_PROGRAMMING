#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  function name : CheckLeapYear
//  description :   It accepts number(year) from user, prints if it is leap year or not
//  Input :         int
//  Output :        string
//  Author :        soham sachin sonar
//  Date :          23/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if(year % 4 == 0)
    {
        printf("%d is a leap year.\n",year);
    }
    else
    {
        printf("%d is not a leap year.\n",year);
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int yr;
    printf("Enter year: ");
    scanf("%d", &yr);
    CheckLeapYear(yr);
    return 0;
}