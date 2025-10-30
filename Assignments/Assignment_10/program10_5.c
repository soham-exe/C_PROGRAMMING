#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : SquareMeter
//  description :   Accepts an area in square feet and converts it to square meters.
//  Input :         int
//  Output :        double
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    return (iValue*0.0929);
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet ");
    scanf("%d",&iValue);
    
    dRet = SquareMeter(iValue);
    
    printf("Area in square meters is %lf", dRet);
    
    return 0;
}

//  Time complexity = O(1) {constant time}