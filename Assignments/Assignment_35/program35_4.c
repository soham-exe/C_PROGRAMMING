#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  ChkVowel
//  Description:    Checks if the given string contains at least one vowel
//                  (a, e, i, o, u, both upper and lower case).
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////
BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') ||(*str == 'e') ||(*str == 'i') ||(*str == 'o') ||(*str == 'u') ||
           (*str == 'A') ||(*str == 'E') ||(*str == 'I') ||(*str == 'O') ||(*str == 'U'))
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

// /////////////////////////////////////////////////////////////////////////////
//  Entry point function
// /////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}
