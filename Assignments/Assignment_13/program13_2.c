#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : print_even_numbers
//  description :   Accepts a number and prints all even numbers up to that limit.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    int iCnt = 0;

    for(iCnt = 2;iCnt <= limit;iCnt += 2)
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
    
    print_even_numbers(limit);
    return 0;
}

//  Time complexity = O(n/2)
