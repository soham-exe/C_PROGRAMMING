#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : MultipleDisplay
//  description :   Accepts an integer and displays its first 5 multiples.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5;iCnt++)
    {
        printf("%d\t",iCnt*iNo);
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
    
    MultipleDisplay(iValue);
    
    return 0;
}