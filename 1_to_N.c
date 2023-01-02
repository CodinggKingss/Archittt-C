#include <stdio.h>

int main(){

    int x = 1;
    int n;
    printf("Enter N\n");
    scanf("%d", &n);

    while(x<=n){
        printf("%d\n", x );

        x=x+1;
    }

    return 0;

}