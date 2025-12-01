#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// /////////////////////////////////////////////////////////////////////////////
// 
//  Function Name:  ChkAlpha
//  Description:    Checks whether the given character is an alphabet 
//                  (between 'A'-'Z' or 'a'-'z').
//  Author:         SOHAM SACHIN SONAR
//  Date:           16/11/2025
//
// /////////////////////////////////////////////////////////////////////////////
BOOL ChkAlpha(char ch)
{
    if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("Its is not a character");
    }
    return 0;
}
