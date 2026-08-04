#include <stdio.h>

#define LIMIT 15

int getline_pr(char arr[], int lim);

int main (){
   
    int lim = LIMIT;
    char arr[50];
    getline_pr(arr, lim);
    printf("%s", arr);
    return 0;
}

int getline_pr(char arr[], int lim){
    
    int c, i, spaces, li;
    i = 0;
    li = -1;
    spaces = 0;

    while ((c = getchar()) != EOF && i <= lim - 2 && c != '\n' ){
        arr[i] = c;
        if (c == '\t' ||  c == ' '  ){
           ++spaces;
        }else{
           li = i;  
        }
        ++i;
    }

        arr[li + 1] = '\n';
        arr[li + 2] = '\0';

    return i;
}
