#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : DisplayEvenFactor
//  description :   It accepts a numbers from user and display's even factors of 
//                  that number
//  Input :         integer
//  Output :        void,string
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1;i <= iNo/2;i++)                   
    {
        if((i % 2)==0 && (iNo % i) == 0 )           //business logic
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

    DisplayEvenFactor(iValue);

    return 0;
}