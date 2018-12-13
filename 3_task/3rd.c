#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"
#include "functions.c"
#define LENGHT 256

int main(int argc, char *argv[])
{

    FILE *ptr_open;
    FILE *ptr_write;

    ptr_open = fopen(argv[1], "r");

    if (ptr_open == NULL)
    {
        printf("No file");
        return 0;
    }
    ptr_write = fopen(argv[2], "w");

    if (ptr_open == NULL)
    {
        printf("No file");
        return 0;
    }

    char r_buffer[LENGHT];

    while (fgets(r_buffer, LENGHT, ptr_open) != NULL)
    { 
        digits_to_letters(r_buffer, strlen(r_buffer));
        // for (i = 0; i <= LENGHT; i++){
        //     printf("%c",write_buffer[i]);
        // }
        fputs(r_buffer, ptr_write);
        fprintf(ptr_write, "\n");
    }
    fclose(ptr_open);
    fclose(ptr_write);

    return 0;
}