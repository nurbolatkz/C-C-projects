#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* rcapitalize(char* param_1){
    int len = strlen(param_1);
    
    for(int i = 0; i<len;i++){
        
        if ( (97<=param_1[i] && param_1[i] <=122) && (param_1[i+1] == ' ')  ){ //&& (str[i+1] == ' ') 
            
            char  ch = param_1[i] -97;
            param_1[i] = 65 + ch;
           
        }else if( (65<=param_1[i] && param_1[i]<=90) && (param_1[i+1] != ' ')){ //&& (str[i+1] != ' ')
             char ch = param_1[i] - 65;
             param_1[i] = 97 + ch;
               
        }
        
        
    }
    param_1[len-1] = toupper(param_1[len-1]);
    return strdup(param_1);
}
