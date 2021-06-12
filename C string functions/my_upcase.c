char* my_upcase(char* param_1)
{
   int size = strlen(param_1)+1;
   
   char ch[size];
   //char ch;
   int i=0;
   while(i<=size){
       if(*param_1 == '\n'){
           break;
       }
       ch[i] = *param_1;
       param_1++;
       i++;
   } 
   for(int i = 0;i<size; i++){
        if(ch[i]>= 97 && ch[i]<=122){
            int indx = ch[i] -97;
            ch[i]  = 65+indx;
        }
    }
   
  
   
    return strdup(ch);
    

}
