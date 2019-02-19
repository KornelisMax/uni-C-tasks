#include <stdio.h>
#include <stdlib.h>
#include "dequeimplementation.c"
#include "header.h"

void CREATE_EMPTY_DEQUE()
{
        head = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            printf("can't allocate memory");
        }

        tail = (struct node *)malloc(sizeof(struct node));
        if (tail == NULL)
        {
            printf("can't allocate memory");
        }
        
        // free(head);
        // free(tail);
        // *head = NULL;
        // *tail = NULL;
    }


void CHECK_IF_EMPTY(struct node **head_ref)
{
        if (*head_ref == NULL)
        {
            printf("Deque is empty");
        }
        else
        {
            printf("Deque isn't empty");
        }
    }


int main()
{

    CREATE_EMPTY_DEQUE();
    struct Node* head = NULL; 
    struct Node* tail = NULL;
    CHECK_IF_EMPTY(&head);
    return 0;
}


/*  create empty Deque
    check whether its empty or full */
    
    
    
    

    