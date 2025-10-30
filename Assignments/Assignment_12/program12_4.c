#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : sum_of_even_factors
//  description :   Accepts a number and returns the sum of all its positive even factors, excluding the number itself.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 2;iCnt <= number/2 ;iCnt += 2)
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
int main()
{
    int number;
    
    printf("Enter number : ");
    scanf("%d", &number);
    
    printf("%d\n", sum_of_even_factors(number));
    return 0;
}

//  Time complexity = O(n/2)
