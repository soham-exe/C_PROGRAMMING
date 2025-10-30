#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////
//
//  function name : ChkZero
//  description :   Accepts a number and checks whether it contains a zero or not.
//  Input :         int
//  Output :        BOOL
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    while(iNo != 0)
    {
        if(iNo % 10 == 0)
        {
            return TRUE;
        }
        iNo /= 10;
    }
    return FALSE;
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    
    return 0;
}

//  Time complexity = O(n)
