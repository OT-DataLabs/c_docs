#include <stdio.h>

int main (){
    
    int i,n;

    n = 0;

    printf("CTRL + D to stop\n");
    
    while ((i = getchar()) != EOF){
       
       if (i != ' '){
          putchar(i);
          n = 0;
       }
       if (i == ' '){
          ++n;
       }
       if (n == 1){
         putchar(i);
       } 
    }

    return 0;
}
