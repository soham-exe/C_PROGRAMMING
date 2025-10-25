#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Accept
//  description :   It is used to Accept a bumber from user and display that number of * on screen
//  Input :         integer
//  Output :        string
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)            // Business logic
    {
        printf(" * ");
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
    iValue = 5;

    Accept(iValue);
    return 0;
}