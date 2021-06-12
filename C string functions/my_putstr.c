#include <unistd.h>
int my_putchar(char c) {
  return write(1, &c, 1);
}
void my_putstr(char* param_1)
{
    while(*param_1){
        if(*param_1 == '\n'){
            break;
        }
        my_putchar(*param_1);
        param_1++;
    }
}
