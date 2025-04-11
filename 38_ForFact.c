/*Factorial Example*/
#include<stdio.h>
void main()
{
	int num , f = 1, i;
	printf("Enter the Number: \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		f = f * i;
	}
	printf("The Number's Factorial = %d",f);
}