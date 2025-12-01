#include <stdio.h>

// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  Display
//  Description:    Accepts a character and displays its ASCII value in
//                  Decimal, Octal, and Hexadecimal representations.
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal\t\t%d\n",ch);
    printf("Octal\t\t%04o\n",ch);
    printf("Hexadecimal\t%#X\n",ch);
}

// /////////////////////////////////////////////////////////////////////////////
//  Entry point function
// /////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
