#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : DollarToINR
//  description :   Accepts an amount in US dollars and returns its value in Indian rupees.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    return iNo * 70;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD ");
    scanf("%d",&iValue);
    
    iRet = DollarToINR(iValue);
    
    printf("Value in INR is %d",iRet);
    
    return 0;
}

//  Time complexity = O(1) {constant time}