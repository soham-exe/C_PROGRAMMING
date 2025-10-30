#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : KMtoMeter
//  description :   Accepts a distance in kilometers and converts it to meters.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    return iNo*1000;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter distance ");
    scanf("%d",&iValue);
    
    iRet = KMtoMeter(iValue);
    
    printf("Distance in meters is %d", iRet);
    
    return 0;
}

//  Time complexity = O(1) {constant time}