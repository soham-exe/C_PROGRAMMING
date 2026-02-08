#include<stdio.h>


int Min(int iNo)
{
    if (iNo < 10)
    {
        return iNo;
    }
    int iRestMin = Min(iNo / 10);
    
    int iLastDigit = iNo % 10;

    if (iLastDigit < iRestMin)
    {
        return iLastDigit;
    }
    else
    {
        return iRestMin;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Min(iValue);
    printf("%d\n", iRet);

    return 0;
}