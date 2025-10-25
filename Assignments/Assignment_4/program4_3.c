#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : NonFact
//  description :   It accepts a number from user and prints its non factors
//  Input :         int
//  Output :        int
//  Author :        soham sachin sonar
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
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
    int iValue =0;

    printf("Enter number ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}