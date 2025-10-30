#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : print_odd_numbers
//  description :   Accepts a number and prints all odd numbers up to that limit.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void print_odd_numbers(int limit)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= limit;iCnt += 2)
    {
        printf("%d\t",iCnt);
    }
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
    
    print_odd_numbers(limit);
    return 0;
}

//  Time complexity = O(n/2)
