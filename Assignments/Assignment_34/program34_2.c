// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  Display
//  Description:    Toggles the case of the given character.
//                  If input is lowercase → prints uppercase.
//                  If input is uppercase → prints lowercase.
//                  Otherwise → prints the character as-is.
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c",(char)(ch - 32));
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c",(char)(ch + 32));
    }
    else
    {
        printf("%c",ch);
    }
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
