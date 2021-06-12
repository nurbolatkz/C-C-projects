char* reverse_string(char* param_1)
{
    int len =  strlen(param_1);
    char r[len];
    int i =0;
    
    while(len>=0){
        if(*param_1 =='\n'){
            break;
        }
        r[i] = *(param_1 + len-1);
        i++;
        len--;
    }
    return strdup(r);
