#include <stdio.h>
#include <string.h>

char *removeDuplicate(char str[]) 
{ 
   // Used as index in the modified string 
   int index = 0; 
   int n  = strlen(str)+1;
     
   // Traverse through all characters 
   for (int i=0; i<n; i++) { 
         
     // Check if str[i] is present before it   
     int j;   
     for (j=0; j<i; j++)  
        if (str[i] == str[j]) 
           break; 
       
     // If not present, then add it to 
     // result. 
     if (j == i) 
        str[index++] = str[i]; 
   } 
     
   return str; 
} 
char* inter(char param_1[], char* param_2){
    
  
    
    
    int len = strlen(param_1);
    char* str1 = param_1;
    //char my_str = strcat(param_1, param_2);
    char* my_str = strcat(param_1, param_2);
    char* word = removeDuplicate(my_str);
    char str2[len];
    int k = 0;

    for(int i = 0; i<len;i++){

        if( str1[i] == word[i] ) {
            str2[k] = word[i];
            k++;
            
        }
    }
    word[len] = '\0';


    return strdup(str2);
}
