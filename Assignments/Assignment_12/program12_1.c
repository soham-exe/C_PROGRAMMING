#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : print_factors
//  description :   Accepts a number and prints all its positive factors in ascending order.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void print_factors(int number)
{   
    int iCnt = 0;
    for(iCnt = 1;iCnt <= number/2 ;iCnt++)
    {
        if(number % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
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
    
    printf("Enter number : ");
    scanf("%d", &number);
    
    print_factors(number);
    
    return 0;
}

//  Time complexity = O(n/2)
