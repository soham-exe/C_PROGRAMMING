#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : MultDigits
//  description :   Accepts a number from the user and returns the multiplication of all its digits.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iMult = 0;
    iMult = 1;
    while(iNo != 0)
    {   
        if(iNo % 10 != 0)
            iMult *= (iNo % 10);
        iNo /= 10;
    }
    return iMult;
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
    
    iRet = MultDigits(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

//  Time complexity = O(n)
