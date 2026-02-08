#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;
    if (*str != '\0') 
    {
        if (*str >= 'a' && *str <= 'z')
            iCount++;

        Small(str + 1);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char string[100] = {'\0'};
    printf("Enter a string: ");
    scanf("%[^\n]", string);

    iRet = Small(string);
    printf("%d\n", iRet);

    return 0;
}