#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Number
//  description :   Accepts a number and prints if it is small, medium, or large.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if (iNo < 100 )
    {
        printf("Medium");
    }
    else if(iNo >= 100)
    {
        printf("Large");
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
    
    Number(iValue);
    
    return 0;
}