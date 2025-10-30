#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : EvenFactorial
//  description :   Accepts a number and returns its even factorial.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
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
    return iEFact;
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
    
    iRet = EvenFactorial(iValue);
    
    printf("Even Factorial of number is %d",iRet);
    
    return 0;
}

//  Time complexity = O(n/2)