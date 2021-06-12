/* Write a function named hidenp that takes two strings and returns 1
if the first string is hidden in the second one,
otherwise returns 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string. */

#include <stdio.h>
#include <string.h>

int hidenp(char* param_1, char* param_2)
{   
    int len = strlen(param_1);
    int len2 = strlen(param_2);
    
    if(len == 0){
        return 1;
    }
    int k = 0;
    int pos = 0;
   
    for(int  i = 0;i<len;i++){
        for(int j = pos;j < len2;j++){
            if(param_1[i] == param_2[j]){
                k++;
                pos = k;
                break;
            }
        }
        
    }
    if(k == len){
        return 1;
    }else{
        return 0;
    }
    
  
}
