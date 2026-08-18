#include <stdio.h>

#define MAXLINE 35

int n;
char arr[MAXLINE];

int getline_pr();

int main(){

    getline_pr();
    printf("%s", arr);
    return 0;
}

int getline_pr(){
    
    extern int n;
    extern char arr[];
    int c, k, step, i;
    k = 1;
    
    printf("Set the n value: ");
    scanf("%d", &n);
    getchar();    

    printf("Set your sentence  | CTRL + D to stop\n");

    for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF; ++i ){
        if (c == '\t'){
             step = n - k + 1;
             while(step > 0 && i < MAXLINE - 1){
                arr[i] = '_';
                if (step > 1){
                    ++i;
                    ++k;
                }
                --step;
             }
        } else if ( c == ' '){
            arr[i] = '_';
        } else if(c == '\n'){
           arr[i] = '\n';
           ++i;
           break;
        } else {
            arr[i] = c;
        }
        ++k;
        if(k > n){
           k = 1;
        }
    }
    arr[i] = '\0';
    return i;

}
