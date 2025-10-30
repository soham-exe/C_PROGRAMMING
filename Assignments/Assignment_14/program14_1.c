#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : DisplayDigit
//  description :   Accepts a number from the user and displays its digits in reverse order.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    
    printf("Enter number ");
    scanf("%d",&iValue);
    
    DisplayDigit(iValue);
    
    return 0;
}

//  Time complexity = O(n)
