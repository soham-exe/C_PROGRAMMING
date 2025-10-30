#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : RangeSum
//  description :   Accepts a range from the user and returns the addition of all numbers in between.
//  Input :         int, int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iTotal = 0;
    if(iStart > iEnd || iStart < 0 )
    {
        return -1;    
    }
    for(iCnt = iStart; iCnt <= iEnd;iCnt++)
    {
        iTotal += iCnt;
    }

    return iTotal;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;
    
    printf("Enter starting point ");
    scanf("%d",&iValue1);
    
    printf("Enter ending point ");
    scanf("%d",&iValue2);
    
    iRet = RangeSum(iValue1, iValue2);
    
    printf("Addition is %d",iRet);
    
    return 0;
}

//  Time complexity = O(n)
