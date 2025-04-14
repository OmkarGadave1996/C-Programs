/*3d Array*/
#include<stdio.h>
void main()
{
	int a[2][2][3], i, j, k;
	printf("Enter the 3D array Element:   \n");
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
	printf("The 3D array Matrix: \n");
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
}