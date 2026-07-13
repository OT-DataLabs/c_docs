#include <stdio.h>

int main (){

    int ans;

    printf("getchar() != EOF. 0 or 1\n");

    ans = (getchar() != EOF);

    printf("%d\n", ans);

    return 0;


}
