#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : ChkGreater
//  description :   Accepts an integer value and checks a condition.
//  Input :         int
//  Output :        bool
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;
    printf("Please enter number ");
    scanf("%d",&iValue);
    
    bRet = ChkGreater(iValue);
    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
    return 0;
}