# include <stdio.h> 
# include <string.h> 

void my_filereadfunction(char* file_name){
    char dataToBeRead[200]; 
    FILE* fp;
    
    fp = fopen(file_name,"r");
    
    if(fp == NULL){
        printf("Failed to open this file try later again!!! :)");
    }else{
          while( fgets ( dataToBeRead, 50, fp) != NULL ) 
        { 
          
            
            printf( "%s" , dataToBeRead ) ; 
         }
    }
}

int main(int arc, char* argv[]){
    if(arc == 1){
        return 0;
    }
    for(int i = 1;i<arc;i++){
        my_filereadfunction(argv[i]);
    }
    return 0;
}
