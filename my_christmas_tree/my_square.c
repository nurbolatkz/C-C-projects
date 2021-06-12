#include <stdio.h>  
#include <string.h> 
#include <stdlib.h>

int main(int ac, char **av)
{    if(ac<=2){ 
        return 0;
        
    }   
   
    int y = atoi(av[1]);
    int n = atoi(av[2]);
    
   
    for(int i = 0; i<n; i++){
            for(int j = 0; j<y; j++){
                if(i==0 && j==0 || i==n-1 && j==0 || i==n-1 && j== y-1 || i==0 && j==y-1 ){
                    printf("o");
                    }else if(0<i<n-1 && (j==0 || j==y-1 )){
                    printf("|");
                    }else if(0<j<y-1 &&  (i==0 || i==n-1) ){
                    printf("-");
                    }else{
                    printf(" ");
                    }
            }
        printf("\n");
    }
    
      
 return 0;     
      
}
