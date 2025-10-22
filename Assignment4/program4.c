#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : SumNonFact
//  description :   It accepts a number from user and prints its sum of non factors
//  Input :         int
//  Output :        int
//  Author :        soham sachin sonar
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
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
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}
