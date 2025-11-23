//check if iNo is prime


#include<stdio.h>
#include<stdbool.h>
int CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bflag = false;
    if (iNo < 0)
    {
        iNo = - iNo;
    }
    
    for (iCnt = 2,bflag = true; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bflag = false;
            break;                  // Optimization
        }
    }
    return bflag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    bRet = CheckPrime(iValue);
    if (bRet == true)
        printf("%d is a prime number.\n",iValue);
    else
    {
        printf("%d is not a prime number.\n",iValue);
    }
    return 0;
}



// Time complexity : for prime - N/2
// Time complexity : for non prime - either 1 or 2