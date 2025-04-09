/*Eligibility Example*/
#include<stdio.h>
void main()
{
	int y;
	printf("Enter the Number: ");
	scanf("%d",&y);
	if(y>=18)
	{
		printf("Eligible For Voting");
	}
	else
	{
		printf("Not Eligible for Voting");
	}
}