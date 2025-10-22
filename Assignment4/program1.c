#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : MultFactor
//  description :   It accepts a number from user and prints multiplication of its factors
//  Input :         int
//  Output :        int
//  Author :        soham sachin sonar
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int MultFactor(int iNo)
{
    int iCnt = 0;
    int iMultF = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMultF *= iCnt;
        }
    }
    
    return iMultF;
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

    iRet = MultFactor(iValue);

    printf("%d",iRet);

    return 0;
}