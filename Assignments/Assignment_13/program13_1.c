#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : print_numbers
//  description :   Accepts a number and prints all numbers from 1 to that limit.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void print_numbers(int limit)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= limit;iCnt++)
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
    
    print_numbers(limit);
    return 0;
}

//  Time complexity = O(n)
