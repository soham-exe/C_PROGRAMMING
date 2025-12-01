// /////////////////////////////////////////////////////////////////////////////
//  Function Name:  DisplaySchedule
//  Description:    Displays the exam schedule based on the entered division
//                  (A/a, B/b, C/c, D/d).
//  Input:          A single character representing the division
//  Output:         Prints the exam time for that division
//  Author:         SOHAM SACHIN SONAR
//  Date:           30-11-2025
// /////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7.00 AM");
    }
    
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8.30 AM");
    }
    
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM");
    }

    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10.30 AM");
    }
}

// /////////////////////////////////////////////////////////////////////////////
//  Entry point function
// /////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
