/* Write a function that takes a string, and returns another string which contains exactly one
space between words, with no spaces or tabs either at the beginning or the end.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_strip(char* param_1)
{   
    char* mystns2  = malloc(strlen(param_1)* sizeof(char));
    int pok = 0;
    int pstn = 0;
    for(int i = 0;i <strlen(param_1);i++){
        if( (pstn == 0 && param_1[0] == ' ') || (param_1[i] == ' '&& param_1[i+1]== ' ')  ){
            pstn++;
            continue;
        }else{
            mystns2[pok] = param_1[i];
            pok++;
        }
    }
    int size = strlen(mystns2);
    if( (mystns2[size - 1] == ' ') ){
         mystns2[size - 1] ='\0';
    }
    return mystns2;

}
