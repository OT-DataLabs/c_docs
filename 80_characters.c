#include <stdio.h>

#define MAXLINE 80

int getline_pr(char line[], int maxline);

int main (){
    
    char arr[MAXLINE * 2]; 
    int lim = MAXLINE;
    
    while (getline_pr(arr, lim) > 0) {
        printf("%s", arr);
    }
    return 0;
}



int getline_pr(char line[], int maxline) {
    int c, i, k;
    k = 0;
    for (i = maxline - 1; i > (maxline * -1) && (c = getchar()) != EOF && c != '\n'; --i) {
        line[k] = c;
        ++k;
    }
    if (i > 0){
        for(int z = 0; z < k; ++z){
            line[z] = 0;
        }
        return 0;
    }
    
    if (c == '\n') {
        line[k] = c;
        ++k;
    }
    
    line[k] = '\0';
    
    return k;
}
