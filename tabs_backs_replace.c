#include <stdio.h>

int main (){

    int i;

    printf("CTRL + D to stop\n");

    while ((i = getchar()) != EOF){
        if (i == '\t'){
            putchar('\\');
            putchar('t');
        }
        if (i == '\b'){
            putchar('\\');
            putchar('b');
        }
        if(i == '\\'){
            putchar('\\');
            putchar('\\');
        }else {
            putchar(i);
        }
        
    }

    return 0;
}
