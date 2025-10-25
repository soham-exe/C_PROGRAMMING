/*
step 1:understand the problem statement
step 2:write the algorithm
step 3:decide the programing language
step 4:write the program
step 5:Test the program
*/

/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        If the input in negative then convert it into positive
        Perform addtion on no1 and no2
        Display the addtion on screen
    STOP

*/
#include<stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2; // business logic
    return fSum;
}
int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f ,fRet = 0.0f;

    printf("enter first number :\n");
    scanf("%f",&fValue1);
    printf("enter Second number :\n");
    scanf("%f",&fValue2);

    fRet=AdditionTwoNumbers(fValue1,fValue2);
    
    printf("Addition is :%f",fRet);

    return 0;
}