


#include<stdio.h>


int main()
{   
    int iNo =7236 , iDigit = 0;

    iDigit = iNo % 10;
    iNo = iNo / 10;
    printf("%d",iDigit);

    iDigit = iNo % 10;
    iNo = iNo / 10;
    printf("%d",iDigit);

    iDigit = iNo % 10;
    iNo = iNo / 10;
    printf("%d",iDigit);

    iDigit = iNo % 10;
    iNo = iNo / 10;
    printf("%d",iDigit);
    
    iDigit = iNo % 10;
    iNo = iNo / 10;

    return 0;
}



// Time complexity : for prime - N/2
// Time complexity : for non prime - either 1 or 2