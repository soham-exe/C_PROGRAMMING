#include<stdio.h>

// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  Reverse
//  Description:    Prints the given string in reverse order.
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////
void Reverse(char *str)
{
    int temp = *str;
    while(*str != '\0')
    {
        str++;
    }
    while(*str != temp)
    {
        printf("%c",*str);
        str--;
    }
    printf("%c",temp);
}

// /////////////////////////////////////////////////////////////////////////////
//  Entry point function
// /////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    Reverse(arr);

    return 0;
}
