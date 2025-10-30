#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : OddFactorial
//  description :   Accepts a number and returns its odd factorial.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt += 2)
    {   
        iOFact *= iCnt;
    }
    return iOFact;
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
    
    iRet = OddFactorial(iValue);
    
    printf("Odd Factorial of number is %d",iRet);
    
    return 0;
}

//  Time complexity = O(n/2)
