/*Create a function that splits a string of characters depending on a separator.  */
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

string_array* my_split(char* param_1, char* param_2)
{         string_array* my_arr =  malloc(sizeof(string_array));
          char newString[100][100];
          int i,j,ctr;
          j=0; ctr=0;
          

          if(strlen(param_1)==0 && strlen(param_2)==0){
              char* empty[1] = {""};
              my_arr->size = 0;
              my_arr->array = empty;
              return my_arr;
          }
          
         
          for(i=0;i<=(strlen(param_1));i++){
        
                if(param_1[i] == param_2[0] || param_1[i]=='\0'){
                    newString[ctr][j]='\0';
                    ctr++;  
                    j=0;    
                }else{
                    newString[ctr][j]=param_1[i];
                    j++;
                }
        }
        char* p[ctr];
        for(int i = 0; i < ctr; i++){
            p[i] = newString[i];
            
        }
        
        char** dptr = p;
        
        my_arr->size = ctr;
        my_arr->array = dptr; 
        return my_arr;
}
