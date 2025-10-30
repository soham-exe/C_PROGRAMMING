#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : count_factors
//  description :   Accepts a number and returns the total count of its positive factors.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int count_factors(int number)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 1;iCnt <= number/2 ;iCnt++)
    {
        if(number % iCnt == 0)
        {
            iCount ++;
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
    printf("%d\n", count_factors(number));
    
    return 0;
}

//  Time complexity = O(n/2)
