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

/////////////////////////////////////////////////////////////////////////////////
//
//              required Header file
//
////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : AdditionTwoNumbers
//  description :   It is used to perform addition
//  Input :         float,float
//  Output :        float
//  Author :        soham sachin sonar
//  Date :          09/10/2025
//
///////////////////////////////////////////////////////////////////////////////
float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum = 0.0f;

    if(fNo1 < 0.0f){ //Updator
        fNo1 = -fNo1;
    }
    if(fNo2 < 0.0f){ //Updator
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2; // business logic
    return fSum;
}
///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handeled by the application
//
//  Input1 :  10.5  Input2 : 3.2    Output : 13.7  
//  Input1 :  -10.5  Input2 : 3.2    Output : 13.7  
//  Input1 :  10.5  Input2 : -3.2    Output : 13.7  
//  Input1 :  -10.5  Input2 : -3.2    Output : 13.7  
//  Input1 :  10.5  Input2 : 0.0    Output : 10.5
//
///////////////////////////////////////////////////////////////////////////////

