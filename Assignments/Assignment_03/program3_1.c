#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  function name : Display
//  description :   It accepts a numbers from user and display's that number of
//                  even numbers
//  Input :         integer
//  Output :        void,string
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{   
    int iCnt = 0;
    int iCount = 0;
    if(iNo <= 0)
    {
        return;
    }
    for(iCnt=2,iCount=1;iCount <= iNo;iCnt= iCnt + 2,iCount++)
    {
        printf("%d ",iCnt);
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

    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);

    return 0;
}