#include <stdio.h> 
#include <stdlib.h> 
int* my_range(int param_1, int param_2)
{ 
      int len = param_2 - param_1;
      int* arr = malloc(len * sizeof(int));
     
      
      int i = 0;
      for (param_1; param_1 < param_2; param_1) { 
			arr[i] = param_1++; 
			i++;
	   }
	   return arr;
}
