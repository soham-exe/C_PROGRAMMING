#include<stdio.h>

// Dynamic function
void Display(int ifrequency)
{
    int iCnt = 0;
    for (iCnt =1;iCnt<=ifrequency;iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}


int main()
{   
    int iCount = 0;

    printf("Enter the frequency: \n");
    scanf("%d",&iCount);

    Display(iCount);
       
    return 0;
}    