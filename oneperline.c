#include <stdio.h>

int main (){
    
    int i;

    printf("CTRL + D to stop\n");
    while ((i = getchar()) != EOF ){
        if (i == ' ' || i == '\n' || i == '\b' || i == '\t'){
            printf("\n");
        }else{
            putchar(i);
        }

    }

    return 0;

}
