#include <stdio.h> 
#include <stdlib.h> 
#include "header.h"
#include "dequeFun.c"
 
/* Program to test DequeFunctions.c*/
int main() 
{ 
      // int input, data;
      // for (;;) {
      // printf("1. Initialize Deque - creaty empty Deque.\n");
      // printf("2. Insert an element at front of Deque.\n");
      // printf("3. Insert an element at end of Deque.\n");
      // printf("4. Delete element from the end.\n");
      // printf("5. Delete element from the front.\n");
      // printf("6. Destroy Deque.\n");
      // printf("7. Print Deque.\n");
      // printf("8. Exit.\n");
      // scanf("%d", &input); 
      // if (input == 1) 
      // {
      //    printf("Empty Deque created.\n");
      //    initializeDeque();
      // }
      // if (input == 2) 
      // {
      //    printf("Enter value of element\n");
      //    scanf("%d", &data);
      //    printDeque(head);
      // }
      // if (input == 3)
      //  {
      //    printf("Enter value of element\n");
      //    scanf("%d", &data);
      //    addRear(&head,data);
        
      // }
      // if (input == 4)
      // {
      //    delRear(&head);
     
      // }
      // if (input == 5);
      // {
      //    delFront(&head);  
       
      // }
      // if(input == 6)
      // {
      //    delAll(&head);
      
      // }
      // if (input == 7)
      // {
      //   printf("\n im in 7: "); 
      //    printDeque(head);
       
      // }
      // if (input == 8)
      // {
      //     break;
      // }

      // }
         


//   *returnHead();
  initializeDeque();
  isDequeFull();
  isDequeEmpty(&head);
  addFront(&head, 2); 
  isDequeEmpty(&head);
// printf("%d s",  i);
  addRear(&head, 4); 
//   scanf("%d", &n);
//   addRear(&head, 2);
//     delFront(&head);
//     delFront(&head);
//     delFront(&head);
    delRear(&head);
    // delRear(&head);
//   delAll(&head);
  // delAll(&head);
// initializeDeque();
    addFront(&head, 5);
//   printf("\n list iar: "); 
  printDeque(); 
  return 0; 
} 