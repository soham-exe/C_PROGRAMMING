// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  DisplayASCII
//  Description:    Displays the ASCII table from 0 to 255 in Decimal, Hex,Octal
//                  and Character format.
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Dec\tHex\tOct\tChar\n");
    
    for(iCnt = 0;iCnt <= 255;iCnt++)
    {
        printf("%d\t%02X\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

// /////////////////////////////////////////////////////////////////////////////
//  Entry point function
// /////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();
    return 0;
}
