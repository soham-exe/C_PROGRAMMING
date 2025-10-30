#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Display
//  description :   It accepts number from user and display's "Hello" 
//                  if number is less than 10 or else Display's "Demo"
//  Input :         integer
//  Output :        string
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)                //business logic
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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