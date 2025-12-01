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
    static char ch = 'A';
    if(ch < 'G')
    {
        printf("%c\t", ch);
        ch++;
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