/*If Examples*/
#include<stdio.h>
void main()
{
	int a = 10;
	int b =20;
	if(a<b)
		printf("Hi!\t");
		printf("Pune\t");
	printf("Bye\n");

	a = 100;
	b = 20;
	if(a<b)
		printf("Hi!\t");
		printf("Pune\t");
	printf("Bye\n");

	if(a<b)
		printf("Hi!\t");
	else
		printf("Bye\t");	
	printf("Pune\n");

	a = 10;
	if(a<b)
		printf("Hi!\t");
	else
		printf("Bye\t");	
	printf("Pune\n");

	a = 10;
	b = 10;
	if(a>b)
	{
		printf("A is max");
	}	
	else
	{
		printf("B is max");	
	}
}