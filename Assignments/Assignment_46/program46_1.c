#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int Count(PNODE first);
void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
    newn->next = *first;
    *first = newn;
}
void InsertLast(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {   
        temp = *first;
        while((temp->next) != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

}
void InsertAtPos(PPNODE first,int no,int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount = 0;
    iCount = Count(*first);
    
    if(pos < 1 || pos > iCount+1)
    {
        return;
    }
    if(pos == 1)
    {
        InsertFirst(first,no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(first,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        temp = *first;
        for(int i = 1;i < (pos-1);i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }

}
void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        *first = temp->next;
        free(temp);
    }
}
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        free(temp->next);
        temp->next = NULL;
    } 
}
void DeleteAtPos(PPNODE first,int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    PNODE target = NULL;
    int count = Count(*first);
    
    if(pos < 1 || pos > count)
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == count)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;
        for(int i = 1;i < (pos-1);i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        free(target);
    }
}
int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}
void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayGreater
//  Description   : displays node with values greater than x
//  Input         : PNODE,int
//  Output        : void
//  Author        : Soham Sachin Sonar
//  Date          : 02/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void DisplayGreater(PNODE first ,int x)
{   
    while(first != NULL)
    {
        if(first->data > x)
        {
            printf("| %d |->",first->data);
        }
        first = first->next;
    }
    printf("NULL\n");
}
int main()
{
    PNODE head = NULL;
    InsertFirst(&head,15);
    InsertFirst(&head,14);
    InsertFirst(&head,13);
    InsertFirst(&head,12);
    InsertFirst(&head,11);
    Display(head);
    DisplayGreater(head,12);
    return 0;
}

