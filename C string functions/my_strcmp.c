int my_strcmp(char* param_1, char* param_2)
{
    int len1 = strlen(param_1);
    int len2 = strlen(param_2);
    int k;
    if (len1 == len2){
        for(int i = 0;i<len1-1;i++){
            if(*param_1 == *param_2){
                param_2++;
                param_1++;
                k++;
                continue;
            }else{
                if(*param_1>*param_2){
                    k = 1;

                }else if(*param_1<* param_2){
                    k = -1;
                
                }
                break;
             }
        }
        
     }else{
       if(*param_1>*param_2){
            k = 1;

        }else if(*param_1<* param_2){
            k = -1;
      }
    }
    if( k == len1){
         k = 0;
         
    }
    return k; 
}
