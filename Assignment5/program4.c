#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  function name : CheckNumberType
//  description :   It accepts number from user, prints if it is positive , negative or zero
//  Input :         int
//  Output :        string
//  Author :        soham sachin sonar
//  Date :          23/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("%d is positive number.\n",num);
    }
    else if(num < 0)
    {
        printf("%d is negative number.\n",num);
    }
    else if(num == 0)
    {
        printf("%d is zero.\n",num);
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    CheckNumberType(number);
    return 0;
}