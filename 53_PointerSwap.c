/*Pointers*/
#include<stdio.h>
void ram(int*, int*);
void main()
{
	int a = 10, b = 20;
	printf("Before Swapping\n");
	printf("A: %d\t B: %d",a,b);
	ram(&a,&b);
	printf("\nAfter Swapping\n");
	printf("A: %d\t B: %d",a,b);
}
void ram(int* x,int* y)
{
	int temp;
	temp = *x;	
	*x = *y;
	*y = temp;
}