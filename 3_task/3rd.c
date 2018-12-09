#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define lenght 256
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

    char r_buffer[lenght];

    while (fgets(r_buffer, lenght, ptr_open) != NULL)
    {
        digits_to_letters()

            fputs(r_buffer, ptr_write);
        fprintf(ptr_write, "\n");
    }
    fclose(ptr_open);
    fclose(ptr_write);

    return 0;
}
// void digits_to_letters(r_buffer[], int lenght,char )


int i = 0;
   char space= '32';
    
    for(i=0; i<=lenght; i++)
    {
        symbol = r_buffer[i];
        if (symbol = space)
        {
            last_char = NULL
            continue;
        }

        if (is_letter(symbol) && !is_letter(last_char))
        {
            last_char = symbol;
        }
        else if (symbol >= '0' && symbol <= '9')
        {
            symbol = last_char;
        }
        
    }
       






int is_letter(int symbol)
{
    if (symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z')
    {
        return 1;
    }

    return 0;
}

// void read_from_file_to_buffer(r_buffer[], int lenght,FILE *ptr_open)


// void open_file()