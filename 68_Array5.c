/* Store array Value*/
#include<stdio.h>
void storevalue(int*, int);
void main()
{
	int arr[5],i;
	storevalue(arr,5);
	for(i=0;i<5;i++)
	{
		printf("The valus are %d\n",arr[i]);
	}
}
void storevalue(int* ptr, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
}