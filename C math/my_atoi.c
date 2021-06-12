
int my_atoi(char* param_1)
{    
    int rslt = 0;

    int sign = 0;
    int i = 0;

    if(param_1[0] == '-'){
        sign = 1;
        i++;
    }
    int check = 0;

    for(;param_1[i] != '\0';i++){
        if ('0'<param_1[i]<'9'){
             rslt = rslt * 10 + param_1[i] - '0';
        }else{
            check = 1;
        }
       
    }
    if(check == 1){
        return 0;
    }else{
        if (sign == 1 ){
           return -1 * rslt;
        }else{
           return rslt;
       }   
    }
    


}
