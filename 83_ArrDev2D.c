/*2d Array Division*/
#include<stdio.h>
void main()
{
	int a[2][3], b[2][3], c[2][3], i, j;
	printf("Enter the A's 2D array Element:   \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the B's 2D array Element:   \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The A's 2D array Matrix: \n");
	for(i=0;i<2;i++)
	{		
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}
	printf("The B's 2D array Matrix: \n");
	for(i=0;i<2;i++)
	{		
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");	
	}		
	printf("\nThe Division A & B 2D Array Matrix: \n");
	for(i=0;i<2;i++)
	{		
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] / b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");	
	}
}