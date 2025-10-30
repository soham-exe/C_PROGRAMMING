#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : RangeDisplayRev
//  description :   Accepts a range and displays all numbers within it in reverse order.
//  Input :         int, int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invaild range");    
    }

    for(iCnt = iEnd; iCnt >= iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point ");
    scanf("%d",&iValue1);
    
    printf("Enter ending point ");
    scanf("%d",&iValue2);
    
    RangeDisplayRev(iValue1, iValue2);
    
    return 0;
}

//  Time complexity = O(n)
