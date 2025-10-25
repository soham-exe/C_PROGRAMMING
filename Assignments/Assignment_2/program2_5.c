#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : ChkEven
//  description :   It accepts a numbers from user and checks if it is even or odd
//  Input :         integer
//  Output :        boolean
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)                          //business logic
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

    printf("Enter number ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    if(bRet == true)
    {
        printf("%d is Even number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }
    return 0;
}
