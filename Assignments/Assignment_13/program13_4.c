#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : sum_natural_numbers
//  description :   Accepts a limit and returns the sum of the first N natural numbers.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int sum_natural_numbers(int limit)
{   
    int iCnt = 0;
    int iTotal = 0;
    if(limit != 0)
    {
        for(iCnt = 1;iCnt <= limit;iCnt++)
        {
            iTotal += iCnt;
        }

        return iTotal;
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int limit;
    
    printf("Enter number : ");
    scanf("%d", &limit);
    
    printf("%d\n", sum_natural_numbers(limit));
    return 0;
}

//  Time complexity = O(n)
