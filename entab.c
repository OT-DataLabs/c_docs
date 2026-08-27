#include <stdio.h>

#define MAXLINE 100

char arr[MAXLINE];

void entab(void);

int main(void) {
    entab();
    printf("%s\n", arr);
    return 0;
}

void entab(void) {
    int c, n;
    int i = 0;
    int col = 1;      
    int spaces = 0;   

    printf("Set the n value: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return;
    }
    getchar(); 

    printf("Set your sentence | CTRL + D to stop\n");

    while(i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n') {
        if (c == ' ') {
            ++spaces;
            if (col % n == 0) {
                arr[i++] = '\t';
                spaces = 0;
            }
        } else{
            while (spaces > 0) {
                arr[i++] = ' ';
                --spaces;
            }
            arr[i++] = c;
        }
        ++col;
    }
    while(spaces > 0 && i < MAXLINE - 1) {
        arr[i++] = ' ';
        --spaces;
    }

    arr[i] = '\0';
}
