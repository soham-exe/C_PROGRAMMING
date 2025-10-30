#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : sum_even_numbers
//  description :   Accepts a limit and returns the sum of the first N even numbers.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int sum_even_numbers(int limit)
{
    int iCnt = 0;
    int iTotal = 0;
    if(limit != 0)
    {
        for(iCnt = 2;iCnt <= limit;iCnt+=2)
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
int main(void)
{
    int limit;
    
    printf("Enter number : ");
    scanf("%d", &limit);
    
    printf("%d\n", sum_even_numbers(limit));
    return 0;
}

//  Time complexity = O(n/2)
