/*Array to another Array*/
#include<stdio.h>
void main() 
{
	int a[5],b[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter Element at %d Position is: \n",i);
		scanf("%d",&a[i]);
	}
	printf("Element of a\tElement of b\n");
	for(i=0;i<5;i++)
	{
		b[i] = a[i];
		printf("%d \t\t %d\n",a[i],b[i]);
	}	
}