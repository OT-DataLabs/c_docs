#include <stdio.h>



int getline_pr(char arr[]);

int main (){
   
    char arr[50];
    getline_pr(arr);
    printf("%s", arr);
    return 0;
}

int getline_pr(char arr[]){
    int c, i, s;
    char last_char;
    char space;
    space = ' ';
    i = s = 0;
    while ((c = getchar()) != EOF){
        if (c == '\t' ){
            arr[i] = space;
        }
        if(c == ' ' ){
            arr[i] = c;
            ++s;
        }
        if(c == ' ' && s > 1){
            
        }else{
            arr[i] = c;
        }
        ++i;
        last_char = c;
    }
    
    if (arr[i - 1] == ' ' || arr[i - 1] == last_char ){
        arr[i - 1] = '\n';
        ++i;
        arr[i] = '\0';
    }

    return i;
}
