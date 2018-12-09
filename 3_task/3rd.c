#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGHT 256

int is_number(int symbol)
{
    if (symbol >= '0' && symbol <= '9')
    {
        return 1;
    }
    return 0;
}

int is_letter(int symbol)
{
    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
    {
        return 1;
    }

    return 0;
}

void digits_to_letters(char buffer[], int lenght1)
{
    char last_char = ' ';
    char symbol;
    int i = 0;
    char space = ' ';

    for (i = 0; i <= lenght1; i++)
    {
        symbol = buffer[i];
        if (symbol == space)
        {
            last_char = space; 
            continue;
        }

        if (is_letter(symbol) && !is_letter(last_char))
        {
            last_char = symbol;
        }
        else if (is_number(symbol))
        {
            symbol = last_char;
        }
    }
}


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
            fputs(r_buffer, ptr_write);
        fprintf(ptr_write, "\n");
    }
    fclose(ptr_open);
    fclose(ptr_write);

    return 0;
}