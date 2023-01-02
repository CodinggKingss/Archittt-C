#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns;
  
 	printf("\nEnter 2D Array rows and columns =  ");
 	scanf("%d %d", &i, &j);
	
	int a[i][j];

 	printf("\nPlease Enter the 2D Array Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
	printf("\nPrinting the 2D Array\n");
 	for(rows = 0; rows < i; rows++)
  	{
  		for(columns = 0;columns < j; columns++)
  		{
  			printf("%d  ", a[rows][columns]);
		}
   		printf("\n");
  	}  	

 	return 0;
} 