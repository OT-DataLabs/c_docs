#include <stdio.h>

#define LIMIT 15

int getline_pr(char s[], int lim );
void reverse(char s[]);

int main(){

   int index = 0; 
   char arr[LIMIT];
   index = getline_pr(arr, LIMIT);
   printf("Number of spaces in the array %d\n", index - 1);
   reverse(arr);

   return 0;
}

int getline_pr(char s[], int lim ){

    int c, i;
    i = 0;
    
    while ((c = getchar()) != EOF && c != '\n' && i < lim - 2){
        s[i] = c;
        ++i;
    }

    s[i] = '\n';
    ++i;
    s[i] = '\0';

    return i;
}

void reverse(char s[]){

    int i, k, j;
    i = 0;
    k = 0;

    while (s[i] != '\0'){
        ++i;
    }
    
    i = i - 2; 
    j = i;
    
    char v[LIMIT]; 
    
    for (k = 0; k <= j; ++k){
        v[k] = s[i];
        --i; 
    }

    v[k] = '\n';
    ++k;
    v[k] = '\0';

    printf("String reversed: %s", v);
}
