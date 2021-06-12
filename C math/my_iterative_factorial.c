#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int my_iterative_factorial(int param_1)
{       int k = 1;
        for(param_1;param_1>0; param_1--){
            k *= param_1;
        }
        return k;
}
