#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Display
//  description :   It accepts number from user and display's that number of "*"
//  Input :         integer
//  Output :        string
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
    
    if (iNo < 0)                  // Updater
    {
        iNo = -iNo;
    }
    while(iCnt < iNo)            // Business logic
    {
        printf(" * ");
        iCnt++;
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