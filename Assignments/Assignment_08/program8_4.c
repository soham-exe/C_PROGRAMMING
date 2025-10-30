#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Table
//  description :   Accepts a number from the user and displays its multiplication table.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{   
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= 10;iCnt++)
    {
        printf("%d\t",(iCnt*iNo));
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
    
    Table(iValue);
    
    return 0;
}