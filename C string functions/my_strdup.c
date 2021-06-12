char* my_strdup(char* param_1)
{     
    int size = strlen(param_1);
    char* word = malloc(size * sizeof(char));
    
    for(int i = 0; i < size; i++){
        word[i] = *(param_1 + i);
    }
    return word;

}
