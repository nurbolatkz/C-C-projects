int my_iterative_pow(int param_1, int param_2)
{    
     int a = param_1;
     int b = param_2;
     
     int k = 1;
     for(int i = 0;i < b;i++){
         k*= a;
     }
     return k;

}
