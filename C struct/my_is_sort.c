#include <stdbool.h>
#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{    
    int size = param_1->size;
    int* arr = param_1->array;

    if (size < 1) {
        return true;
    }

    int i = 0;
    while(i < size && arr[i] <= (arr[i + 1]<0? arr[i+1] = -1 * arr[i+1]: arr[i+1] )){
        i++;
    }
    if(i == size){
         return true;
     }else{
         false;
     }
}
