#include<stdio.h>

// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  Difference
//  Description:    Calculates the difference between the number of small case
//                  letters and capital letters in the given string.
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////
int Difference(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int *src = str;
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            iCnt1++;
        }
        else if ((*src >= 'A') && (*src <= 'Z'))
        {
            iCnt2++;
        }
        
        src++;
    }
    return (iCnt1 - iCnt2);
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

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}
