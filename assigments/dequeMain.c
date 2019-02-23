#include <stdio.h> 
#include <stdlib.h> 
  
// A linked list node 
struct Node 
{ 
  int data; 
  struct Node *next;
  struct Node *previous; 
}; 
  
/* inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
  
    /* put in the data  */
    new_node->data  = new_data; 
  
    new_node->previous = NULL;
    /* make next of new node as head */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 
  
/* adds a new node at the end  */
void append(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    struct Node *tail = *head_ref;  /* used to get last element*/
  
    /* put in the data  */
    new_node->data  = new_data; 
  
    /* new node is going to be the last node, so make next of 
          it as NULL*/
    new_node->next = NULL; 

    /* previous node points to nothing */
    new_node->previous = *(head_ref);

    /* if the list is empty, then make the new node as head */
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    } 

    /* traverse till the last node */
    while (tail->next != NULL)     
        tail = tail->next; 
    /* change the next of last node */
    tail->next = new_node; 
    new_node->previous = tail;
    return; 
} 

void DELETE_FRONT(struct Node **head_ref) //front
{
    struct Node *current = *head_ref;

    if(current == NULL)
    {
        printf("list is already empty");
    }

    while (current != NULL) //is necessery
        { 
            *head_ref = current->next;    
            free(current);             
            return;
        }   
       
    }


void DELETE_REAR(struct Node **head_ref) //works
{
    struct Node *current = *head_ref;
    struct Node *last = *head_ref;
    struct Node *check = *head_ref;
   
    
    if(*head_ref == NULL)
    {
        printf("already empty list");
        return;
    }
    // printf("already empty list");
        while(current ->next !=NULL)
        {
            last = current;
            current = current ->next;
            current ->previous = check;
        }
    
        
        if(current == *head_ref)
        {
            *head_ref = NULL;
            free(current);
            return;
        }
        last ->next = NULL;
        free(current);
        
        }



    

void DELETE_ALL(struct Node **head_ref)
{
     struct Node *current = *head_ref;
     struct Node *next; 

    if(current == NULL)
    {
        printf("already empty list");
    }


     while (current != NULL)  
        { 
            next = current->next; 
            free(current); 
            current->previous = NULL;
            current = next; 
        } 
    
   
    *head_ref = NULL; 
        } 
        


void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
     
  } 
    } 
  
int main() 
{ 
  struct Node* tail = NULL;
  struct Node* head = NULL; 
  
  push(&head, 7); 
  //push(&head, 1); 
//   append(&head, 4); 
  append(&head, 5);
//   DELETE_FRONT(&head);
  DELETE_REAR(&head);
  DELETE_REAR(&head);

  push(&head, 1);
//   DELETE_ALL(&head);
//   DELETE_ALL(&head);
//   push(&head, 1);

  
  
  printf("\n list is: "); 
  printList(head); 
  
  return 0; 
} 