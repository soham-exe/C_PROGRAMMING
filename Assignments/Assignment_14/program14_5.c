#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Count
//  description :   Accepts a number and counts the frequency of digits that are less than 6.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        if(iNo % 10 < 6)
        {
            iCnt ++;
        }
        iNo /= 10;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = Count(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

//  Time complexity = O(n)
