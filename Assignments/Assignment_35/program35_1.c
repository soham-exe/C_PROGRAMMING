#include<stdio.h>

// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  CountCapital
//  Description:    Counts the number of capital (A–Z) characters present
//                  in the given string.
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCnt = 0;
    int *src = str;
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            iCnt++;
        }
        src++;
    }
    return iCnt;
}

// /////////////////////////////////////////////////////////////////////////////
//  Entry point function
// /////////////////////////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}
