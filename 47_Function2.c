/* 2nd Type Function*/
#include<stdio.h>
int sum();
void main()
{
	int x;
	x = sum();
	printf("%d",x);
}
int sum()
{
	int a = 10, b = 20, c;
	c = a + b;
	return c;
}
