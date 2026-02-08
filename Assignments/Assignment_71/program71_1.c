#include <stdio.h>

int WhiteSpace(char *c)
{
    if (*c == ' ' || *c == '\t')
        return (1 + WhiteSpace(c + 1));
    else if (*c == '\0')
        return 0;
    else
        return WhiteSpace(c + 1);
}

int main()
{
    char c[100] = {'\0'};

    printf("Enter a string: ");
    scanf("%[^\n]", c);

    int iRet = WhiteSpace(c);
    printf("%d\n", iRet);

    return 0;
}