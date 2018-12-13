#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "functions.c"


int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    create_list(n);
    reverse_list();
    printf("\nreversed elements\n");
    display();

    return 0;
}



