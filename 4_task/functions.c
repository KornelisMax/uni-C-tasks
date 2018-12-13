#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

struct element {
    int data; 
    struct element *next; 
}*head;


void create_list(int n)
{
    struct element *new_element, *temp;
    int data, i;

    if(n <= 0)
    {
        printf("has to be more than 0.\n");
        return;
    }

    head = (struct element *)malloc(sizeof(struct element));


    if(head == NULL)
    {
        printf("can't allocate memory");
    }
    else
    {
   
        printf("data: ");
        scanf("%d", &data);

        head->data = data; 
        head->next = NULL; 

        temp = head;

        for(i=2; i<=n; i++)
        {
            new_element = (struct element *)malloc(sizeof(struct element));

            if(new_element == NULL)
            {
                printf("can't allocate memory");
                break;
            }
            else
            {
                printf("data: ", i);
                scanf("%d", &data);

                new_element->data = data; 
                new_element->next = NULL; 

                temp->next = new_element; 
                temp = temp->next;
            }
        }

    }
}


void reverse_list()
{
    struct element *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode; 
    }
}


void display()
{
    struct element *temp;

    if(head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("data = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}

