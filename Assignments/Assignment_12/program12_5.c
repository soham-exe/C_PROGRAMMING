#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : is_divisible_by_five
//  description :   Accepts a number and checks if it is divisible by five.
//  Input :         int
//  Output :        bool
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool is_divisible_by_five(int number)
{
    if(number % 5 == 0)
    {
        return true;
    }
    return false;
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
    
    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");
    
    return 0;
}

//  Time complexity = O(1)
