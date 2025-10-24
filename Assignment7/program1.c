#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Pattern
//  description :   Accepts an integer and displays a pattern based on it.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{   
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
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
    
    Pattern(iValue);
    
    return 0;
}