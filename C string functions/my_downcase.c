char* my_downcase(char* param_1)
{
   int size = strlen(param_1)+1;
   
   char ch[size];
  
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
        if(ch[i]>= 65 && ch[i]<=90){
            int indx = ch[i] -65;
            ch[i]  = 97 +indx;
        }
    }
  return strdup(ch);

}
