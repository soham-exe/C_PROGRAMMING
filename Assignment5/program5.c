#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  function name : FindLargest
//  description :   It accepts three numbers from user,returns the largest
//  Input :         int,int,int
//  Output :        int
//  Author :        soham sachin sonar
//  Date :          23/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if((x > y) && (x > z))
    {
        return x;
    }
    else if((y > x) && (y > z))
    {
        return y;
    }
    else if((z > x) && (z > y))
    {
        return z;
    }
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);
    printf("Largest number is: %d\n", result);
    return 0;
}


