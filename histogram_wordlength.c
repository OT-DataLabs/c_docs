#include <stdio.h>

int main (){

    int e;
    int i, n;
    i = n = 0;
    int arr[100];
    int conte;
    
    printf("CTRL + D to stop\n");
    while ((e = getchar()) != EOF){
        if (e >= '0' && e <= '9'){
            ++i;
            arr[n] = i;
        }else if (e == ' ' || e == '\n' || e == '\t' ){
           i = 0;
            ++n;
        }
        else {
            ++i;
            arr[n] = i;
        }

    }        
    
    printf("Histogram of the length of the words\n");
    for (int j = 0; j < n; ++j){
        conte = arr[j];
        printf("position %d\n", j);
        for (int k = conte; k > 0; --k){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
