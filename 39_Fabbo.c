/*Fabbonacci Series Example*/
#include<stdio.h>
void main()
{
	int num , a = 0, b = 1, c, i;
	printf("Enter the Number: \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		c = a + b;
		printf("\t%d",c);
		a = b;
		b = c;		
	}
}