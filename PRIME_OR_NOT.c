#include <stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter N\n");
    scanf("%d",n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }

    if(c==2){
        printf("N is PRIME");
    }
    else{
        printf("N is NOT PRIME");
    }
    return 0;
}