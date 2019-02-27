#include <stdio.h> 
#include <stdlib.h> 
#include "header.h"
#include "dequeFun.c"
 
/* Program to test DequeFunctions.c*/
int main() 
{ 
      int n;
//   addfront(&head, 1); 
  addRear(&head, 4); 
// scanf("%d", &n);
  addRear(&head, 2);
//   delfront(&head);
//   delrear(&head);
  delAll(&head);
  // delAll(&head);
//   addfront(&head, 5);
  printf("\n list is: "); 
  printDeque(head); 
  return 0; 
} 