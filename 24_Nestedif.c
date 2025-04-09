/*Nested if Example*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three Numbers: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{	
			printf("A is Greater");
		}
		else
		{
			printf("B is Greater");				
		}
		}
	else
	{
		if(b>c)
		{	
			printf("B is Greater");
		}
		else
		{
			printf("C is Greater");				
		}
	}
}