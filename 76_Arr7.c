/*Array Descending*/
#include<stdio.h>
void main() 
{
	int a[5],i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("Enter A Array Element at %d Position is: \n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("The is in Descending Order is: \n");	
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}	
}