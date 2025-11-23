// iteration

#include<stdio.h>

void DisplayDigits(int iNo)
{   
    int iDigit = 0;
    printf("------------------------------------\n");
    printf("orignal value of iNo is : %d\n",iNo);
    printf("------------------------------------\n"); 
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("iDigit is :%d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n",iNo);
    }
    
    printf("------------------------------------\n");
}
int main()
{   
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);
    return 0;
}



// Time complexity : for prime - N/2
// Time complexity : for non prime - either 1 or 2