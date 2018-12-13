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
    struct element *previous_element, *current_element;

    if(head != NULL)
    {
        previous_element = head;
        current_element = head->next;
        head = head->next;

        previous_element->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            current_element->next = previous_element;

            previous_element = current_element;
            current_element = head;
        }

        head = previous_element; 
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
            printf("data: %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}

