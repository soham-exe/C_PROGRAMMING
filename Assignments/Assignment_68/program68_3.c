#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        i++;
        Display();
        printf("%d\t",--i);
    }
}

int main()
{
    Display();
    return 0;
}