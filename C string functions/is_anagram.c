#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* my_sort(char* str){
    int len = strlen(str);
    
    for(int i = 0;i<len;i++){
        for(int j = 0; j<len-i-1;j++){
            if(str[j] > str[j+1]){
                char ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    return strdup(str);
}
int is_anagram(char* param_1, char* param_2)
{     
    char* str1 = my_sort(param_1);
    char* str2 = my_sort(param_2);

    int len =  strlen(param_1);

    if ( !len ){
        return 1; 
    }
    for(int i = 0;i <len;i++){
        if (str1[i] != str2[i]){
            return 0;
        }
    }
    return 1;
}
