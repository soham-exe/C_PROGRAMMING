#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Display
//  description :   Accepts an integer and performs a display operation.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{   
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = -iNo;iCnt <= iNo;iCnt++)
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
    int iValue = 0;
    printf("Enter number ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}