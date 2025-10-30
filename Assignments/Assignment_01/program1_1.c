#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  function name : Divide
//  description :   It is used to perform Division
//  Input :         integer,integer
//  Output :        integer
//  Author :        soham sachin sonar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Divide  (   
            int iNo1,                       // First input
            int iNo2                        // Second input
            ) 
{
    int iAns = 0;
    
    if(iNo2 == 0)                          // Filter
    {
        return -1;
    }

    iAns = iNo1 / iNo2;                     //business logic

    return iAns;
}
// End of Divide()

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////
int main() 
{   
    int iValue1 = 15,iValue2 = 5;

    int iRet = 0;

    iRet = Divide(iValue1,iValue2);             // Store's result from Divide()

    printf("Division is %d",iRet);

    return 0;
}