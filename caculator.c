#include <stdio.h>

int main(){
    char operator;
    float num1, num2, result=0;

    printf("Enter any one operator like +,-,*,/ \n");
    scanf("%c", &operator );
    printf("Enter the value of operand: ");
    scanf("%f%f", &num1, &num2 );

    switch (operator){
    case '+' : result = num1 + num2;
    break;

    case '-'  :result = num1-num2;
    break;

    case '*'  :result = num1*num2;
    break;

    case '/'  :result = num1/num2;
    break;

    default  :printf("Invalid Operator\n");}

    printf("The Value = %f", result);

return 0;
    }
