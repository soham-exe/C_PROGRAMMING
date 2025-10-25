#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : OddDisplay
//  description :   Accepts an integer and performs a display operation for odd numbers.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {   
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    printf("Enter number ");
    scanf("%d",&iValue);
    
    OddDisplay(iValue);
    
    return 0;
}