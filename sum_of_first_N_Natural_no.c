#include<stdio.h>
int main()
{
  int n, sum=0;

  printf("Enter n value: ");
  scanf("%d", &n);

  for(int i=0; i<=n; i++)
  {
    sum = sum + i ;
  }

  printf("Sum of first %d natural numbers = %d",n , sum);

    return 0; }