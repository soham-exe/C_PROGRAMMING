#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  function name : CheckEvenOdd
//  description :   It accepts a number from user and prints if it is even or odd
//  Input :         int
//  Output :        string
//  Author :        soham sachin sonar
//  Date :          23/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("%d is Even number.\n",num);
    }
    else
    {
        printf("%d is Odd number.\n",num);
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

    CheckEvenOdd(number);

    return 0;
}
