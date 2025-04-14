/*Array Find Min*/
#include<stdio.h>
void main() 
{
	int a[5],i,min;
	for(i=0;i<5;i++)
	{
		printf("Enter A Array Element at %d Position is: \n",i);
		scanf("%d",&a[i]);
	}
	min = a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
		else
		{
			min = min;	
		}
	}
	printf("The Minimum Number is: %d",min);	
}