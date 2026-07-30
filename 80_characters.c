#include <stdio.h>

#define MAXLINE 80

int getline_pr(char line[], int maxline);

int main (){
    
    
    

    return 0;
}

int getline_pr(char line[], int maxline)
{
    int c, i;

    for (i=0; i < maxline-1 &&  (c = getchar()) != EOF && c != '\n'; ++i){
        if (i >= maxline){
            s[i] = c;
        }
    }
    if (c == '\n'){
        if (i >= maxline ){
            s[i] = c;
            
        }
        ++i;
    }
   if (i >=  maxline){
        s[i - 1] = '\0';
   }
}
