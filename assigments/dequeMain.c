#include <stdio.h> 
#include <stdlib.h> 
#include "header.h"
#include "dequeFun.c"
 
/* Program to test DequeFunctions.c*/
int main() 
{ 
  struct Node *deque = initializeDeque();
   printDeque(deque); 

  addFront(&deque, 2);
  addFront(&deque, 5); 
  addRear(&deque, 4); 
  printDeque(deque); 
  return 0; 
} 