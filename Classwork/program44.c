#include<stdbool.h>
#include<stdio.h>


bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool bRet = false;
    int iValue1 = 0, iValue2 = 0;
    printf("Enter first number: \n");
    scanf("%d",&iValue1);
    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1,iValue2);

    if(bRet == true)
    {
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
    }
    return 0;
}