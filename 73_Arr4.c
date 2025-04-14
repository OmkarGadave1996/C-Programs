/*Array Division*/
#include<stdio.h>
void main() 
{
	int a[5],b[5],c[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter A Array Element at %d Position is: \n",i);
		scanf("%d",&a[i]);
		printf("Enter B Array Element at %d Position is: \n",i);
		scanf("%d",&b[i]);
	}
	printf("Element of a\tElement of b\n");
	for(i=0;i<5;i++)
	{
		printf("%d \t\t %d\n",a[i],b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i] = b[i] / a[i];
		printf("%d\t/\t%d\t=\t%d\n",a[i],b[i],c[i]);
	}	
}