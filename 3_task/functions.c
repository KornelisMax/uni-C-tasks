#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"
#define LENGHT 256

int is_number(int symbol)
{
    if (symbol >= '0' && symbol <= '9')
    {
        return 1;
    }
    return 0;
}

int change_numbers_after_letter (char buffer[], int current_position, int buffer_lenght)
{
    char last_char = buffer[current_position]; 
    for(int j = current_position; j <= buffer_lenght; j++)
    {
        if(isspace(buffer[j]))
        {
            return j;
        }
        if(is_number(buffer[j]))
        {
            buffer[j] = last_char;
        }
    }
    return buffer_lenght;
}

void change_numbers_before_letter(char buffer[], int current_position)
{
    char last_char = buffer[current_position];
    for(int j = current_position; j >= 0; j--)
    {
        if(isspace(buffer[j]))
        {
            return;
        }
        if(is_number(buffer[j]))
        {
            buffer[j] = last_char;
        }
    }
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
   for(int i=0; i<=lenght1; i++)
   {
       if(is_letter(buffer[i]))
       {
          change_numbers_before_letter(buffer, i); 
          i = change_numbers_after_letter(buffer, i, lenght1);
       }
   }
}

