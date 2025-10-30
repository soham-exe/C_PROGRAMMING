#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : CountDiff
//  description :   Accepts a number and returns the difference between the summation of even and odd digits.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iTotOdd = 0;
    int iTotEven = 0;
    while(iNo != 0)
    {   
        if(((iNo % 10) % 2) == 0)
        {
            iTotEven += (iNo % 10);
        }
        if(((iNo % 10) % 2) != 0)
        {
            iTotOdd += (iNo % 10);
        }
        
        iNo /= 10;
    }
    return iTotEven - iTotOdd;
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
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountDiff(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

//  Time complexity = O(n)
