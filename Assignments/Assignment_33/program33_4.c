// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  ChkCapital
//  Description:    Checks whether the given character is a lowercase alphabet (a–z).
//  Input:          A single character
//  Output:         Returns TRUE if character is lowercase alphabet, otherwise FALSE
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

// /////////////////////////////////////////////////////////////////////////////
//  Entry point function
// /////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character");
    }
    else
    {
        printf("Its is not a small case character");
    }
    return 0;
}
