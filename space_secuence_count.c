#include <stdio.h>

int main (){

    int i,n,t,b;
    n = 0;
    t = 0;
    b = 0;
    printf("CTRL + D to stop\n");

    while (( i = getchar()) != EOF){
        if(i == ' '){
           ++b; 
        }
        if(i == '\n'){
            ++n;
        }
        if(i == '\t'){
            ++t;
        }
   }
   printf("%d saltos de línea\n%d tabuladores\n%d espacios en blanco\n", n, t, b);
   return 0;

}



