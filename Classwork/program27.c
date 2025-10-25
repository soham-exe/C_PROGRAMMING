#include<stdio.h>

// Dynamic function
void Display(int ifrequency)
{
    int iCnt = 0;

    // Filter

    if(ifrequency<0)

    {
        printf("Invaid Input");

        return ;
    }

    for (iCnt =1;iCnt<=ifrequency;iCnt++)

    {
        printf("Jay Ganesh...\n");
    }
}


int main()

{   
    int iCount = 0;

    printf("Enter the Frequency: \n");

    scanf("%d",&iCount);

    Display(iCount);
       
    return 0;
}    