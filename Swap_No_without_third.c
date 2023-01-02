#include <stdio.h>
int main(){

    int a;
    printf("Enter a\n");
    scanf("%d",&a);

    int b;
    printf("Enter b\n");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("AFTER SWAPPING a = %d \n",a);
    printf("AFTER SWAPPING b = %d \n",b);

    return 0;
}