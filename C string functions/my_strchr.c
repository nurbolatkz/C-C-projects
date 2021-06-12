char* my_strchr(char* param_1, char param_2)
{
    int len = strlen(param_1)+1;
    int k = 0;
    char wrds[len];
    
    for(int i = 0; i < len; i++){
        if(*(param_1 + i)== param_2){
                k++;
                int j = 0;
                for(k;k < len; k++){
                    wrds[j] = *(param_1+k);
                    j++;
                }
          break;
        }
    }
    if(k == 0){
        return NULL;
    }else {
        return strdup(wrds);
    }
}
