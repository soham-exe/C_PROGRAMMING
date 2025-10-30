#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : FactRev
//  description :   It accepts a number from user and prints its factors in reverse
//  Input :         int
//  Output :        int
//  Author :        soham sachin sonar
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo/2;iCnt >= 1;iCnt--)
    {
        if((iNo%iCnt) == 0)
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
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}