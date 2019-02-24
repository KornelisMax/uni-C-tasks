#include <stdio.h> 
#include <stdlib.h> 
#include "header.h"
#include "dequeFun.c"
 

  
/* inserts a new node at the start */

  
int main() 
{ 
      
  addfront(&head, 1); 
  addend(&head, 4); 
  addend(&head, 5);
//   delfront(&head);
//   delall(&head);
  printf("\n list is: "); 
  printdeque(head); 
  
  return 0; 
} 