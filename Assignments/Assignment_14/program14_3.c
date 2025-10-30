#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : CountTwo
//  description :   Accepts a number from the user and counts the frequency of the digit 2 in it.
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        if(iNo % 10 == 2)
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
    
    iRet = CountTwo(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

//  Time complexity = O(n)
