#include <stdio.h>
#include <stdlib.h>
#include "header.h"


/** Deque - function file.
 * ADD_FRONT- adds data at the beggining of deque. PARAMETERS - 
 * ADD_END - adds data at the end of deque
 * DEL_FRONT - removes data from beggining
 * DEL_REAR - removes data from rear
 * DEL_ALL - removes everything from deque
 * PRINT_DEQUE - prints every element
 * 
*/
struct Node 
{ 
  int data; 
  struct Node *next;
  struct Node *previous; 
}*head; 



int isInitialized = 0;

void initializeDeque()
{
    isInitialized = 1;
}

int isDequeEmpty(struct Node **head_ref)
{
    if(isInitialized == 0) return 1;
    if(*head_ref == NULL)           //checking if there is no node
    {
        printf("empty deque");
        return 0;
    }
    return 0;
}

int isDequeFull()
{
    if(isInitialized == 0) return 1;
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    if(new_node == NULL)
            {
                printf("deque is full");
                return 0;
            }
    printf("deque is not full");        
    free(new_node);
    return 0;
}

int addFront(struct Node** head_ref, int new_data) // adds a new node at the beggining 
{  
    if(isInitialized == 0) return 1;
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); /* allocate node */

    new_node->data = new_data; /* put in the data  */
    new_node->previous = NULL; 
    new_node->next = (*head_ref);  /* make next of new node as head */
    (*head_ref) = new_node;  /* make next of new node as head */

    return 0;
    } 
  
int addRear(struct Node** head_ref, int new_data) //adds at end
{ 
    if(isInitialized == 0) return 1;
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    struct Node *tail = *head_ref;  
    
    new_node->data  = new_data; 
    new_node->next = NULL; /* new node is going to be the last node, so make next of it as NULL */
    if (*head_ref == NULL) /* if the deque is empty, then make the new node as head */
    { 
       *head_ref = new_node; 
       return 0; 
    } 
    while (tail->next != NULL) tail = tail->next;  //traverse till the end
    tail ->next = new_node; // add new node to the last node
    new_node ->previous = tail; // attach previous with new node
    return 0; 
    } 

int delFront(struct Node **head_ref) //deletes front node
{
    if(isInitialized == 0) return 1;
    struct Node *current = *head_ref;

    if(current == NULL) //checkig if there is no node
    {
        return 1;
    }
    *head_ref = current->next;    //2nd node - head 
    free(current);                //deleting 1st node
    return 0;
    }   

int delRear(struct Node **head_ref) //deletes last node
{
    struct Node *current = *head_ref;
    struct Node *last = *head_ref;
    struct Node *check = *head_ref;
   
    if(isInitialized == 0) return 1;
    if(*head_ref == NULL)           //checking if there is no node
    {
        return 1;
    }
    while(current ->next !=NULL)    //traversing to the end of deque
    {
        last = current;
        current = current ->next;
        current ->previous = check;
    } 
    if(current == *head_ref)        //if current is last one we make head NULL and delete node
    {
        *head_ref = NULL;
        free(current);
        return 1;
    }
    last ->next = NULL;             //last node loses connection with previous
    free(current);
    return 0;
        }

int delAll(struct Node **head_ref) //deletes everything (starting at beggining)
{
    if(isInitialized == 0) return 1;
    struct Node *current = *head_ref;
    struct Node *next; 

    // if(current == NULL)  printf("already empty list");         //checking if there is no node
    while (current != NULL)        //traversing and deleting nodes
    { 
        next = current->next;   //
        free(current); 
        current->previous = NULL;
        current = next; 
    } 
    *head_ref = NULL;               //if there's everything already deleted we point head to NULL
        } 

int printDeque(struct Node *node) //function to print deque elements (to check correctness)
{ 
    if(isInitialized == 0) return 1;
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
    return 0;
    } 