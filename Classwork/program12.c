/*
    START
        Accept number and store as no
        Divide no by 2
        If reminder is 0
            then display as even
        otherwise
            display as odd
    STOP
*/
#include<stdio.h>


void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;
    
    if(iRem == 0)
    {
        printf("It is Even mumber\n"); //this is wrong tecnically ()
    }
    else{
        printf("It is Odd mumber\n");

    }
}

int main()
{
    int iValue=0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}