/*Ladderif Example*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three Numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("A is Greater");
	}
	else if(b>a && b>c)
	{
		printf("B is Greater");
	}
	else if(c>a && c>a)
	{
		printf("C is Greater");
	}
	else
	{
		printf("All Numbers are Equal");				
	}
}