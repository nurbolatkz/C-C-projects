#include <stdio.h>  
#include <string.h> 

char*  my_strrchr(char* param_1, char param_2)
{
   int len = strlen(param_1);
   int k = 0;
   
   for(int i = 0;i<len;i++){
       if(*(param_1+i)==param_2){
           k=i;
       }else{
           
       }
   }
    char word[len];
    int i = 0;
    if(k == 0){
        return NULL;
    }else {
        
        for(k;k<len;k++){
            word[i] = *(param_1+k);
            i++;
        }
        return strdup(word);
    }
     
}
