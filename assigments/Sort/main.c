#include <stdio.h>
#include <malloc.h>
 
int main()
{
	int i, n, amount, checkSum, sum = 0;
	int *a, *b, *c;
    int sum1 = 0;
 
    printf("Enter the size of array A \n");
	scanf("%d", &n);
    if (n%3 != 0) return 1;
    amount = n/3;
    if(amount == 1) return 0;

 
    a = (int *) malloc(n * sizeof(int));    
    b = (int *) malloc(n * sizeof(int));    
    c = (int *) malloc(n * sizeof(int));    
    printf("Enter Elements of First List \n");
	for (i = 0; i < n; i++) scanf("%d", a + i);
    for (i = 0; i < (n - 1); i++) *(b + i) = *(a + i + 1);
    for (i = 0; i < (n - 2); i++) *(c + i) = *(a + i + 2);
    for (i = 0; i < n; i++)	printf("elements in array = %d\n", *(c + i));
    if(sum%amount != 0) return 1;
    checkSum = sum/amount;





    

        printf("Sum of all elements in array = %d\n", sum);
 return 0;
}

