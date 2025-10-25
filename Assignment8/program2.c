#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Display
//  description :   Accepts a single digit number and prints it in word format.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero");
    }
    if(iNo == 1)
    {
        printf("One");
    }
    if(iNo == 2)
    {
        printf("Two");
    }
    if(iNo == 3)
    {
        printf("Three");
    }
    if(iNo == 4)
    {
        printf("Four");
    }
    if(iNo == 5)
    {
        printf("Five");
    }
    if(iNo == 6)
    {
        printf("Six");
    }
    if(iNo == 7)
    {
        printf("Seven");
    }
    if(iNo == 8)
    {
        printf("Eight");
    }
    if(iNo == 9)
    {
        printf("Nine");
    }
    else if(iNo > 9)
    {
        printf("Invalid Number");
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