#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : FactDiff
//  description :   It accepts a number from user and prints diffrence 
//                  between sum of its factors and non factor
//  Input :         int
//  Output :        int
//  Author :        soham sachin sonar
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 += iCnt;
        }
        else
        {
            iSum2 += iCnt;
        }
    }
    return (iSum1 - iSum2);
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}