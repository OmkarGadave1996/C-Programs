/*Malloc*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* ptr;
	int n,i;
	printf("Enter size of array: ");
	scanf("%d", &n);
	ptr = (int*)malloc(n*4);
	printf("Enter elements of array: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr[i]);
	} 
}