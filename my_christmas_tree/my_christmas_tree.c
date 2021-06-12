#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
    int high = atoi(argv[1]);
    int row = 3;
    int final_row, space;
    int star = 1, counter = 2;

    for(int i = 0; i < high; i++){
        for(int j = 0; j <= row; j++){
            star =  star + 2;
        }
        if ( i > 0 && i%2 == 0){
            counter = counter + 2;
        }
        
        final_row = star;
        star = star - 2- counter;
        row++;

    }
    space = final_row/2 - 1;
    counter = 2;
    star = 1;
    row = 3;

    for(int i = 0; i < high; i++){

        for(int r = 0; r <= row; r++){
    
            for(int j = 0; j < space; j++){
                printf(" ");
            }
            for(int k = 0; k < star; k++){
                printf("*");
            }
            
            star = star + 2;
            space = space - 1;
            printf("\n");
        }
        
        if( i > 0 && i % 2 == 0) counter += 2;
        star = star - 2- counter;
        space = space + 1 + counter/2;
        row++;
        

    }
    if( high%2 == 0){
        space = (final_row - high)/2;
    }else{
        space = (final_row - high)/2 - 1;
    }

    for(int i = 0; i < high; i++){
        for(int j = 0; j < space; j++) printf(" ");
        for(int k = 0; k < high; k++) printf("|");
        printf("\n");

    }
    return 0;
}
