#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : ChkEqual
//  description :   Accepts two integer values and checks if they are equal.
//  Input :         int, int
//  Output :        bool
//  Author :        soham sachin sonar
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    return false;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    printf("Please enter two numbers");
    scanf("%d %d", &iValue1, &iValue2);
    
    bRet = ChkEqual(iValue1, iValue2);
    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    
    return 0;
}