/*Pointers*/
#include<stdio.h>
int ram(int);
void main()
{
	int a = 10;
	printf("Start");
	ram(a);
	printf("Bye");
	int* b;
	b = &a;
	*b = 40;
	printf("%d",a);
}
int ram(int x)
{
	int* y;
	int z;
	y = &x;
	z = *y;
	printf("%d",z);
}