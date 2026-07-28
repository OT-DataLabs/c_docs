#include <stdio.h>

int main (){

    int e;
    int i, n, s, l;
    i = n = 0;
    s = l = 0;
    int arr[100];
    int conte;
    
    printf("CTRL + D to stop\n");
    while ((e = getchar()) != EOF){
        if (e >= '0' && e <= '9'){
            ++i;
            arr[n] = i;
            ++n;
        }else if (e == ' ' || e == '\n' || e == '\t' ){
            ++s;
            arr[n]= s;
            ++n;
        }
        else {
            ++l;
            arr[n] = l;
            ++n;
        }

    }        
    --s; 
    printf("Histogram of character frecuency\n");
    printf("Numbers: %d", i);
    printf("\n");
    for (int k = i; k > 0; --k){
    	printf("*");
    }
    printf("\n");
    printf("Spaces: %d", s);\
    printf("\n");
    for (int k = s; k > 0; --k){
        printf("*");
    }
    printf("\n");	
    printf("Letters: %d", l);
    printf("\n");
    for (int k = l; k > 0; --k){
        printf("*");
    }
    printf("\n");

    return 0;
}   
