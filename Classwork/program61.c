


#include<stdio.h>


int main()
{   
    int iNo =7236 , iDigit = 0;
    
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);
    
    iDigit = iNo % 10;
    printf("iDigit is%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);
    
    
    iDigit = iNo % 10;
    printf("iDigit is%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);
    
    
    iDigit = iNo % 10;
    printf("iDigit is%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    return 0;
}



// Time complexity : for prime - N/2
// Time complexity : for non prime - either 1 or 2