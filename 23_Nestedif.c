/*Eligibility Example*/
#include<stdio.h>
void main()
{
	int a,w;
	printf("Enter the Age: ");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("Enter the Weight: ");
		scanf("%d",&w);
		if(w>=50)
		{	
			printf("Eligible For Blood Donation");
		}
		else
		{
			printf("Not Eligible for Blood Donation");
		}
	}
	else
	{
		printf("Not Eligible for Blood Donation");
	}
}