/*2d Array*/
#include<stdio.h>
void main()
{
	int a[2][3], i, j;
	printf("Enter the 2D array Element:   \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 2D array Matrix: \n");
	for(i=0;i<2;i++)
	{		
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}		

}