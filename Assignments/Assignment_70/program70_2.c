#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Sum
//  Description   : Returns sum of digits of a number
//  Input         : Integer
//  Output        : Integer (Sum of digits)
//  Author        : Soham Sachin Sonar
//  Date          : 09/02/2026
//
////////////////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    if(iNo != 0)  // digit + // Number / 10
        return ((iNo % 10) + Sum(iNo / 10));
    else
        return 0;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d",iRet);

    return 0;
}