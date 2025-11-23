#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Pattern
//  Description :   Print alphabets by user input
//  Input :         int
//  Output :        void
//  Author :        SOHAM SACHIN SONAR
//  Date :          21/11/2025
//
//////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 0, ch = 'A'; iCnt < iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }
}
///////////////////////////////////////////////////////////////
//  Entry point function
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}