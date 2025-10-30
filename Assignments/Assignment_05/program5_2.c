#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  function name : FindMax
//  description :   It accepts two numbers from user,returns max number
//  Input :         int,int
//  Output :        int
//  Author :        soham sachin sonar
//  Date :          23/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FindMax(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);
    printf("Maximum is: %d\n", result);
    return 0;
}