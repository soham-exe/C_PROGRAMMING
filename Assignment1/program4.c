#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Check
//  description :   It is used to Check whether a number is divisible by 5
//  Input :         integer
//  Output :        bool
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////
bool Check(int iNo)
{
    if((iNo % 5) == 0)              // Business logic
    {
        return true;
    }
    else
    {
        return false;
    }
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
    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}