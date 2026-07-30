#include <stdio.h>
#define MAXLINE 10 

int getline_kr(char s[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    int len;            
    int max;            
    char line[MAXLINE];    
    char longest[MAXLINE]; 

    max = 0;
    while ((len = getline_kr(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) { 
        if (max >= MAXLINE) {
            printf("Length of word above the limit: %d\n", max);
            printf("Word that is above the limit: %s\n", longest);
        } else {
            printf("%s", longest);
        }
    }
    
    return 0;
}

int getline_kr(char s[], int lim)
{
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1) {
            s[i] = c;
        }
    }
    
    if (c == '\n') {
        if (i < lim - 1) {
            s[i] = c;
        }
        ++i; 
    }
        
    if (i < lim - 1) {
        s[i] = '\0'; 
    } else {
        s[lim - 1] = '\0'; 
    }
    
    return i; 
}

/* copy: copia 'from' en 'to'; asume que 'to' es suficientemente grande */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
