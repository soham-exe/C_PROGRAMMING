// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  Display
//  Description:    If input is lowercase: prints characters from given char
//                  down to 'a'.
//                  If input is uppercase: prints characters from given char
//                  up to 'Z'.
//                  Otherwise: does nothing.
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch;iCnt >= 'a';iCnt--)
        {
            printf("%c\t",iCnt);
        } 
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch;iCnt <= 'Z';iCnt++)
        {
            printf("%c\t",iCnt);
        } 
    }
    else
    {
        return;
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
