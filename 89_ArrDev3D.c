/*3D Array Division*/
#include<stdio.h>
void main()
{
	int a[2][2][3], b[2][2][3], c[2][2][3], i, j, k;
	printf("Enter the A's 3D array Element:   \n");
		for(k=0;k<2;k++)
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&a[k][i][j]);
			}
		}
	}
	printf("Enter the B's 3D array Element:   \n");
	for(k=0;k<2;k++)
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&b[k][i][j]);
			}
		}
	}
	printf("The A's 3D array Matrix: \n");
	for(k=0;k<2;k++)
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[k][i][j]);
			}
			printf("\n");
		}
		printf("-------------------------------\n");
	}
	printf("The B's 3D array Matrix: \n");
	for(k=0;k<2;k++)
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",b[k][i][j]);
			}
			printf("\n");
		}
		printf("-------------------------------\n");
	}		
	printf("\nThe Division A & B 3D Array Matrix: \n");
	for(k=0;k<2;k++)
	{	
		for(i=0;i<2;i++)
		{		
			for(j=0;j<3;j++)
			{
				c[k][i][j] = a[k][i][j] / b[k][i][j];
				printf("%d\t",c[k][i][j]);
			}
			printf("\n");	
		}
		printf("-------------------------------\n");
	}	
}