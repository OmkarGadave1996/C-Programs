/*Logical Example*/
#include<stdio.h>
void main()
{
	int a;
	a = printf("Hello\n");
	printf("%d\n",a);

	a = printf("Hello\t") && printf("Bye\t");
	printf("%d\n",a);

	a = printf("") || printf("Bye\t");
	printf("%d\n",a);
	return;
}