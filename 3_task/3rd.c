#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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

    // int letter_symbol(int symbol){
    //     if ((isalpha(symbol)) || ((ispunct(symbol))))
    //     {
    //         return 1;
    //     }

    //     return 0;
    // }



void digits_to_letters(char buffer[], int lenght1)
{
    char last_char;
    char symbol;
    int i = 0;
    char space = 32;
    int k = 0;

   for(i=0; i<= lenght1; i++)
   {
       symbol = buffer[i];

       if(is_letter(symbol))
       {
       last_char = symbol;
        for (k=1; k <= lenght1; k++)
        {
            symbol = buffer[k];
            if(is_number(symbol))
            {
                symbol = last_char;
            }
        }
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
    char write_buffer[LENGHT];

    while (fgets(r_buffer, LENGHT, ptr_open) != NULL)
    {
        // int i;
        // for (i = 0; i <= LENGHT; i++){
        //     printf("%c",r_buffer[i]);
        // }
        digits_to_letters(r_buffer, LENGHT);
        fputs(r_buffer, ptr_write);
        fprintf(ptr_write, "\n");
    }
    fclose(ptr_open);
    fclose(ptr_write);

    return 0;
}