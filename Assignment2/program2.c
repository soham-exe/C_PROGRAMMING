#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Display
//  description :   It accepts number from user and display's that number of " * "
//  Input :         integer
//  Output :        string
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{   
    if (iNo < 0)                //Updater
    {
        iNo = -iNo;
    }

    while(iNo > 0)              //business logic
    {
        printf(" * ");
        iNo--;
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