/*Pointers with pass by address*/
#include<stdio.h>
void ram(int*);
void main()
{
	int a = 10;
	ram(&a);
	printf("%d",a);
}
void ram(int* x)
{
	*x = 30;
}