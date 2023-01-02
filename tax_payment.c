#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter your annual income\n");
    scanf("%f", &income);

    if (income<250000){
       tax = 0;
    }

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    /// Changed "100000" to "1000000" in the following sections
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 50000);
    }
    if (income > 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Tax to be paid by you is Rs %f\n", tax);

    return 0;
}