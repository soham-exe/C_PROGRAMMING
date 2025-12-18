#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//
//  Function name : SearchFirstOcc
//  Description :   First Occurence of element in singly linear linked list
//  Input :         int
//  Output :        int
//  Author :        SOHAM SACHIN SONAR
//  Date :          17/12/2025
//
//////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

struct node
{
    int Data;
    struct node *Next;
};

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn-> Next = *Head;
        *Head = newn;
    }
}

int SearchFirstOcc(PNODE Head, int no)
{
    int iCount = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return iCount;
        }
        iCount++;
        Head = Head->Next;
    }

    return -1;
}

//////////////////////////////////////////////////////////////
// Entry point function
//////////////////////////////////////////////////////////////
int main()
{
    PNODE First = NULL;
    int iRet, iValue = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Enter the Element : \n");
    scanf("%d",&iValue);

    iRet = SearchFirstOcc(First, iValue);

    printf("%d",iRet);

    return 0;
}