#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int tree(char *basePath, int k);
int main (int c ,char* argv[]){

   char* path  = argv[1];
   int  k = tree(path, 0);
   printf("%d", k);



    return 0; 
} 
int tree(char *basePath, int k)
{
    
    char path[1000];
    struct dirent *dp;
    DIR *dir = opendir(basePath);

    if (!dir)
        return 0;

    while ((dp = readdir(dir)) != NULL)
    {    k++;
    
        if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
        {
             
            //k++;
            strcpy(path, basePath);
            strcat(path, "/");
            strcat(path, dp->d_name);
            k + tree(path, k);
        }
    }

    closedir(dir);
    return k;
}
