#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : RangeDisplay
//  description :   Accepts a range from the user and displays all numbers in between.
//  Input :         int, int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          29/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{   
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invaild range");    
    }

    for(iCnt = iStart; iCnt <= iEnd;iCnt++)
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
    
    RangeDisplay(iValue1, iValue2);
    
    return 0;
}

//  Time complexity = O(n)