int my_strlen(char* param_1)
{     int x = 0;
       while(*param_1){
           if(*param_1 == '\n'){
               break;
           }
           param_1++;
           x++;
       }
    return x;
}
