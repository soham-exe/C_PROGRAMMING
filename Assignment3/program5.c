#include<stdio.h>


typedef int BOOL ;

# define TRUE  1
# define FALSE 0

////////////////////////////////////////////////////////////////////////////////
//
//  function name : ChkVowel
//  description :   It accepts a character from user and checks if it is 
//                  a vowel or not
//  Input :         char
//  Output :        bool
//  Author :        soham sachin sonar
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////


BOOL ChkVowel ( char CValue )
{   
    if( CValue == 'A' || CValue == 'E' || CValue == 'I' || 
        CValue == 'O' || CValue == 'U' || CValue == 'a' ||             //business logic                                         
        CValue == 'e' || CValue == 'i' || CValue == 'o' || 
        CValue == 'u' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");

    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
