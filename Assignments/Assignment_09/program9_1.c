#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Display
//  description :   Accepts an integer and displays a pattern.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{   
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("#\t");
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
    
    Display(iValue);
    
    return 0;
}

// Time complexity = O(2n)