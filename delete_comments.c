#include <stdio.h>

int lim;
char arr[1000];

void deleting_comments(void);

int main (void){
    deleting_comments();
    printf("%s\n", arr );
    return 0;
}

void deleting_comments(void){

    printf("Set the characters limit");
    if (scanf("%d", &lim) != 1 || lim <= 0){
        return;
    }
    getchar();

    int c, comment, i;

    comment = 0;
    i = 0;
    
    while (i < lim - 1 && (c = getchar()) != EOF){
        if (c == '/') {
            c = getchar(); //getchar() read the second char 
            if(c == '/') {
                comment = 1;
                arr[i++] = ' ';
                while (comment == 1) {
                    c = getchar(); //getchar() read the whole comment
                    if (c == '\n' || c == EOF){
                        break;
                    }
                }
                comment = 0;  
            } else if(c == '*' ){
                comment = 1;
                arr[i++] = ' ';
                while (comment == 1) {
                    c = getchar(); 
                    if (c == '*' ) {
                        c = getchar(); 
                        if (c == '/' || c == EOF) {
                            break;
                        }
                    }
                }
                comment = 0;
            }else{
                arr[i++] = '/';
                if (c != EOF && i < lim - 1) {
                    arr[i++] = c;
                }
            }
        }else{
            arr[i++] = c;
        }
    }
    arr[i] = '\0';
}
