#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <string.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

int my_putchar(char c){ 
    return write(1,&c,1);
    }
void my_print_words_array(string_array* param_1)
{
        int size = param_1 -> size;
        char** array =  param_1 -> array;

        for(int i = 0; i < size; i++){
            //printf("%s\n", array[i]);
            for(int j = 0; j<strlen(array[i]); j++){
                my_putchar(array[i][j]);

            }
            my_putchar('\n');

        }
        

}
