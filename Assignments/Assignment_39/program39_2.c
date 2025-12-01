#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Displaying pattern using recursion
//  Input :         void
//  Output :        void
//  Author :        Soham Sachin Sonar
//  Date :          01/12/2025
//
//////////////////////////////////////////////////////////////

void Display()
{
    static int iCnt = 0;
    if(iCnt < 5)
    {
        iCnt++;
        printf("%d\t", iCnt);
        Display();
    }
}
///////////////////////////////////////////////////////////////
//  Entry point function
///////////////////////////////////////////////////////////////
int main()
{
    Display();

    return 0;
}