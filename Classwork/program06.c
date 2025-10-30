#include<stdio.h>

int AdditionTwoNumbers(int a,int b)
{
    int sum = 0;
    sum = a + b; // business logic
    return sum;
}
int main()
{
    int i=0,j=0 ,ans =0;

    printf("enter first number :\n");
    scanf("%d",&i);
    printf("enter Second number :\n");
    scanf("%d",&j);

    ans=AdditionTwoNumbers(i,j);

    printf("Addition is : %d",ans);

    return 0;
}