#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : RectArea
//  description :   Accepts the width and height of a rectangle and calculates its area.
//  Input :         float, float
//  Output :        double
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    return fWidth*fHeight;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    
    printf("Enter width ");
    scanf("%f",&fValue1);
    
    printf("Enter height ");
    scanf("%f",&fValue2);
    
    dRet = RectArea(fValue1, fValue2);
    
    printf("Area of rectangle is %lf", dRet);
    
    return 0;
}

//  Time complexity = O(1) {constant time}