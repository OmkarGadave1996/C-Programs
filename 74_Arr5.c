/*Array Find Max*/
#include<stdio.h>
void main() 
{
	int a[5],i,max = 0;
	for(i=0;i<5;i++)
	{
		printf("Enter A Array Element at %d Position is: \n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
		else
		{
			max = max;	
		}
	}
	printf("The Maximum Number is: %d",max);	
}