/*4. Check if the given number is even or odd. */
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number: \t");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Even Number!");
	}
	else
	{
		printf("Odd Number!");
	}
}