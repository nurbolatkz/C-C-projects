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

char* my_join(string_array* param_1, char* param_2)
{
         int size = param_1 -> size;
         char** array =  param_1 -> array;
         if(size==0 ){
             return NULL;
         }
         int k = 0;

         int nums[size];
         char* space = param_2;
         
         char* word = malloc(4*size* sizeof(char));
         for(int i = 0; i < size; i++){
               /*for(int j = 0; j<strlen(array[i];j++)){
                   if j==
               }*/
               //word [i]
               strcat(word,array[i]);
               if (i!=size-1){
                strcat(word, space);
               }

        }
        return word;

}
