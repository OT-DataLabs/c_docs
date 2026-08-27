#include <stdio.h>

#define MAXLINE 100

char arr[MAXLINE];
int limit;

void fold(void);

int main (void){
    fold();
    printf("%s\n", arr);
    return 0;
}

void fold(void){
    int c, lastspace, i, space, col;
    
    printf("Set the limit value: ");
    if (scanf("%d", &limit) != 1 || limit <= 0) {
        return;
    }
    getchar();

    lastspace = -1;
    i = 0; 
    col = 0;

    while (i < MAXLINE - 1 && (c = getchar()) != EOF) {
        if (c == '\n') {
            arr[i++] = '\n';
            col = 0;
            lastspace = -1;
        } else if (c == '\t') {
            space = 4 - (col % 4); 
            while (space > 0 && i < MAXLINE - 1) {
                arr[i++] = ' '; 
                col++;
                space--;
                
                if (col == limit) {
                    arr[i++] = '\n';
                    col = 0;
                    lastspace = -1;
                }
            }
        } else {
            if (c == ' ') {
                lastspace = i;
            }
            
            arr[i++] = c;
            col++;

          
            if (col == limit) {
                if (lastspace != -1) {
                    arr[lastspace] = '\n';
                    col = i - 1 - lastspace;
                    lastspace = -1;
                } else {
                   
                    arr[i++] = '\n';
                    col = 0;
                    lastspace = -1;
                }
            }
        }
    }
    
    arr[i] = '\0';
}
