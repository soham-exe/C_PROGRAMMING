#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : CircleArea
//  description :   Accepts the radius of a circle and calculates its area.
//  Input :         float
//  Output :        double
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    return 3.14*fRadius*fRadius;
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
    
    printf("Enter radius ");
    scanf("%f",&fValue);
    
    dRet = CircleArea(fValue);
    
    printf("Area of circle is %lf", dRet);
    
    return 0;
}

//  Time complexity = O(1) {constant time}