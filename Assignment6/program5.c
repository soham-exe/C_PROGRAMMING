#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Percentage
//  description :   Accepts total marks and obtained marks to calculate percentage.
//  Input :         int, int
//  Output :        float
//  Author :        soham sachin sonar
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

float Percentage(float fTotal,float fObMarks)
{

    if(fTotal == 0)
    {
        return -1;
    }
    
    float fPer = (fObMarks/fTotal)*100;
    
    return fPer;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;
    
    printf("Please enter total marks ");
    scanf("%d",&iValue1);
    
    printf("Please enter obtained marks ");
    scanf("%d",&iValue2);
    
    fRet = Percentage(iValue1, iValue2);
    
    printf("%.1f%%",fRet);
    
    return 0;
}