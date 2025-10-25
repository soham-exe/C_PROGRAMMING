#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Factorial
//  description :   Accepts a number and returns its factorial.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo;iCnt++)
    {
        iFact *= iCnt;
    }

    return iFact;
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
    
    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d",iRet);
    
    return 0;
}