#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : TableRev
//  description :   Accepts a number from the user and displays its table in reverse order.
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          24/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{  
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10;iCnt >= 1;iCnt--)
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
    
    TableRev(iValue);
    
    return 0;
}