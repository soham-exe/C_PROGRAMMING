#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : DisplayConvert
//  description :   It accepts a character from user and converts case  
//                  of that character
//  Input :         char
//  Output :        char
//  Author :        soham sachin sonar
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if (CValue >= 'A' && CValue <= 'Z')                 //business logic
    {
        printf("%c",CValue + 32);
    }
    else if(CValue >= 'a' && CValue <= 'z')             //business logic
    {
        printf("%c",CValue - 32);
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
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}