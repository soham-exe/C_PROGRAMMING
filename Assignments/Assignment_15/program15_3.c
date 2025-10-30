#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : CountRange
//  description :   Accepts a number and returns the count of digits between 3 and 7.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {   
        if(iNo % 10 > 3 && iNo % 10 < 7)
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
    
    iRet = CountRange(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

//  Time complexity = O(n)
