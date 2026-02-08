#include<stdio.h>


int Mult(int iNo)
{
    if(iNo != 0)  // digit * // Number / 10
        return ((iNo % 10) * Mult(iNo / 10));
    else 
        return 1;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
}