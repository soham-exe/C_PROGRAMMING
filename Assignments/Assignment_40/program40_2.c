#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Displaying pattern using recursion
//  Input :         int
//  Output :        void
//  Author :        Soham Sachin Sonar
//  Date :          01/12/2025
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int iCnt = 1;

    if(iNo >= 1)
    {
        iNo--;
        printf("%d\t",iCnt);
        iCnt++;
        Display(iNo);
    }
}
///////////////////////////////////////////////////////////////
//  Entry point function
///////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}