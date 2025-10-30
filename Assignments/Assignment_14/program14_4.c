#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : CountFour
//  description :   Accepts a number from the user and counts the frequency of the digit 4 in it.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        if(iNo % 10 == 4)
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
    
    iRet = CountFour(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

//  Time complexity = O(n)
