#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Display
//  description :   It accepts two numbers from user and display's first number in
//                  second number of times
//  Input :         integer ,integer
//  Output :        string
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    if(iFrequency < 0)                  // business logic
    {
        iFrequency = -iFrequency;
    }
    for(iCnt = 1; iCnt <= iFrequency;iCnt++)
    {
        printf(" %d ",iNo);
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
    int iCount = 0;
    
    printf("Enter number ");
    scanf("%d",&iValue);

    printf("Enter frequency ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}