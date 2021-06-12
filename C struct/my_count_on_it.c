
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

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1)
{
        int size = param_1 -> size;
        char** array =  param_1 -> array;
        int k = 0;
        int nums[size];
        for(int i = 0; i < size; i++){
            k = 0;
            for(int j = 0; j<strlen(array[i]); j++){
                k++;
          }
            nums[i] = k;

        }
        
        integer_array* my_arr = malloc(sizeof(integer_array)); 
        my_arr -> size= size;
        my_arr -> array = nums;
        return my_arr;


}
