#include <stdio.h>

int main (){

    int i,n,t,b;
    n,t,b = 0;
    
    while (( i = getchar()) != EOF)
        if((i == "") || (i == " ")){
           ++b; 
        }
        if(i == "\n"){
            ++n;
        }
        if(i == "\t"){
            ++t;
        }
        printf("%d \\n\n %d \\t\n, %d blancks\n", );
    return 0;

}



