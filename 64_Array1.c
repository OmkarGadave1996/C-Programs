/*Array Input*/
#include<stdio.h>
void main()
{
	int a[5] ,i;
	for(i=0;i<5;i++)
	{
		printf("Enter Element at %d Position is: \n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The Element at %d Position is %d\n",i,a[i]);
	}
}