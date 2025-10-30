#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : FhtoCs
//  description :   Accepts a temperature in Fahrenheit and converts it to Celsius.
//  Input :         float
//  Output :        double
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    return (fTemp*0.555555556)-17.77777778;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit ");
    scanf("%f",&fValue);
    
    dRet = FhtoCs(fValue);
    
    printf("Temperature in Celsius is %lf", dRet);
    
    return 0;
}

//  Time complexity = O(1) {constant time}