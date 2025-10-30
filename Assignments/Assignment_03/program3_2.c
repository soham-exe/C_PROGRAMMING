#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : DisplayFactor
//  description :   It accepts a numbers from user and display's Even factors of 
//                  that number
//  Input :         integer
//  Output :        void,string
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 2;i <= iNo/2;i+=2)                   
    {
        if( (iNo % i == 0))           //business logic
        {
            printf("%d ",i);

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
    
    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}