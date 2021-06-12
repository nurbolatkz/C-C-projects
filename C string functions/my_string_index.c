int my_string_index(char* param_1, char param_2)
{
    int i=0, k=0;
    while(*param_1){
        if(*param_1 == '\n'){
            break;
        }else{
            k++;
        }
        if(*param_1 == param_2){
            break;
        }
        i++;
        param_1++;
    } 
    if(i ==k){
        i = -1;
    }
    return i;
}
