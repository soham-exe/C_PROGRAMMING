#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : FactorialDiff
//  description :   Accepts a number and returns the difference between its even and odd factorial.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo ; iCnt += 2)
    {
        iEFact *= iCnt;
    }

    int iOFact = 1;

    for(iCnt = 1; iCnt <= iNo ; iCnt += 2)
    {   
        iOFact *= iCnt;
    }

    return iEFact - iOFact;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number ");
    scanf("%d",&iValue);
    
    iRet = FactorialDiff(iValue);
    
    printf("Factorial difference is %d",iRet);
    
    return 0;
}

//  Time complexity = O(n)