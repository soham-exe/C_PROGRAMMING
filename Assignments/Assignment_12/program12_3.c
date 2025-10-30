#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : sum_of_factors
//  description :   Accepts a number and returns the sum of all its positive factors.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int sum_of_factors(int number)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 1;iCnt <= number/2 ;iCnt++)
    {
        if(number % iCnt == 0)
        {
            iCount += iCnt;
        }
    }
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main(void)
{
    int number;
    
    printf("Enter number : ");
    scanf("%d", &number);
    
    printf("%d\n", sum_of_factors(number));
    return 0;
}

//  Time complexity = O(n/2)
