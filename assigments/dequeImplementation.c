#include <stdio.h>
#include <stdlib.h>
#include "header.h"
struct node
{
        unsigned int data;
        struct node *previous;
        struct node *next;
    }*head, *tail;

// void CREATE_EMPTY_DEQUE()
// {
//         head = (struct node *)malloc(sizeof(struct node));
//         if (head == NULL)
//         {
//             printf("can't allocate memory");
//         }

//         tail = (struct node *)malloc(sizeof(struct node));
//         if (tail == NULL)
//         {
//             printf("can't allocate memory");
//         }
//         // *head = NULL;
//         // *tail = NULL;
//     }

// void CREATE_EMPTY_DEQUE() 
// {
//         struct node *head = NULL;
//         struct node *tail = NULL;
//     }


// void CHECK_IF_EMPTY(struct node **head_ref)
// {
//         if (*head_ref == NULL)
//         {
//             printf("Deque is empty");
//         }

//         printf("Deque isn't empty");
//     }

// void CHECK_IF_FULL() //change head - checking if it is possible to allocate memory somewhere
// {
//         testing_object = (struct element *)malloc(sizeof(struct element));
//         if (testing_object == NULL)
//         {
//             printf("it's full");
//         }

//         printf("it's not full");
//         free(testing_object);
//     }

// void ADD_IN_FRONT(struct node **head_ref, int newData)
// {
//         struct Node *newNode = (struct node *)malloc(sizeof(struct Node));
//         newNode->data = newData;
//         newNode->previous = NULL;
//         newNode->next = *head_ref;
//         if (*head_ref != NULL)
//         {
//             *head_ref->previous = newNode;
//             *head_ref = newNode;
//         }
//     }

// void ADD_REAR(struct node **tail_ref, int newData)
// {
//         struct Node *newNode = (struct node *)malloc(sizeof(struct Node));
//         newNode->data = newData;
//         newNode->previous = *tail_ref;
//         newNode->next = NULL;
//         if (*tail_ref != NULL)
//         {
//             *tail_ref->next = newNode;
//             *tail_ref = newNode;
//         }
//     }

// void DELETE_FRONT(struct node **head_ref)
// {
//         struct node *current = *head_ref;
//         next = current->next;
//         free(current);
//         current = next;
//         // NOT SURE IF THIS IS NECESSARY
//     }

// void DELETE_REAR(struct node **tail_ref)
// {
//         struct node *current = *tail_ref;
//         previous = current->previous;
//         free(current);
//         current = previous;
//         // NOT SURE IF THIS IS NECESSARY
//     }

// void DELETE_ALL(struct node **head_ref)
// {
    //     struct node *current = *head_ref;
    //     while (current != NULL)
    //     {
    //         next = current->next;
    //         free(current);
    //         current = next;
    //     }
    //     *head_ref = NULL;
    // }


