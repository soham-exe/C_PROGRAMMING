    #include<stdio.h>

    // /////////////////////////////////////////////////////////////////////////////
    //  Function Name:  CountSmall
    //  Description:    Counts the number of small case (a–z) characters present
    //                  in the given string.
    //  Author:         SOHAM SACHIN SONAR
    //  Date:           30-11-2025
    // /////////////////////////////////////////////////////////////////////////////
    int CountSmall(char *str)
    {
        int iCnt = 0;
        int *src = str;
        while(*src != '\0')
        {
            if((*src >= 'a') && (*src <= 'z'))
            {
                iCnt++;
            }
            src++;
        }
        return iCnt;
    }

    // /////////////////////////////////////////////////////////////////////////////
    //  Entry point function
    // /////////////////////////////////////////////////////////////////////////////
    int main()
    {
        char arr[20];
        int iRet = 0;

        printf("Enter string : ");
        scanf("%[^'\n]s",arr);

        iRet = CountSmall(arr);

        printf("%d",iRet);

        return 0;
    }
