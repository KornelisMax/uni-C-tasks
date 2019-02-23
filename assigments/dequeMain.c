#include <stdio.h> 
#include <stdlib.h> 
  
 
struct Node 
{ 
  int data; 
  struct Node *next;
  struct Node *previous; 
} *head; 
  
/* inserts a new node at the start */

void addfront(struct Node** head_ref, int new_data) // adds a new node at the beggining 
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
  

void addend(struct Node** head_ref, int new_data) //adds at end
{ 
    /* allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    struct Node *tail = *head_ref;  
  
    /* put in the data  */
    new_node->data  = new_data; 
  
    /* new node is going to be the last node, so make next of 
          it as NULL*/
    new_node->next = NULL; 

    /* if the deque is empty, then make the new node as head */
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    } 

    /* traverse till the last node */
    while (tail->next != NULL)
    {     
        tail = tail->next; 
    }

    /* change the next of last node */
    tail->next = new_node; 
    new_node->previous = tail;
    return; 
    } 

void delfront(struct Node **head_ref) //deletes front node
{
    struct Node *current = *head_ref;

    if(current == NULL) //checkig if there is no node
    {
        printf("list is already empty");
        return;
    }

    *head_ref = current->next;    //2nd node - head 
    free(current);                //deleting 1st node
    }   

void delrear(struct Node **head_ref) //deletes last node
{
    struct Node *current = *head_ref;
    struct Node *last = *head_ref;
    struct Node *check = *head_ref;
   
    if(*head_ref == NULL)           //checking if there is no node
    {
        printf("already empty list");
        return;
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
        return;
    }

    last ->next = NULL;             //last node loses connection with previous
    free(current);
        }



    

void delall(struct Node **head_ref) //deletes everything (starting at beggining)
{
     struct Node *current = *head_ref;
     struct Node *next; 

    if(current == NULL)             //checking if there is no node
    {
        printf("already empty list");
    }


     while (current != NULL)        //traversing and deleting nodes
        { 
            next = current->next;   //
            free(current); 
            current->previous = NULL;
            current = next; 
        } 
    
   
    *head_ref = NULL;               //if there's everything already deleted we point head to NULL
        } 
        


void printdeque(struct Node *node) //function to print deque elements (to check correctness)
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
     
  } 
    } 
  
int main() 
{ 
      
  addfront(&head, 1); 
  addend(&head, 4); 
  addend(&head, 5);
//   delfront(&head);
  delall(&head);
  printf("\n list is: "); 
  printdeque(head); 
  
  return 0; 
} 