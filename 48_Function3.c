/* 3rd Type Function*/
#include<stdio.h>
int add(int,int);
void main()
{
	int a = 10, b = 20;
	add(a,b);
}
int add(int x, int y)
{
	int c;
	c = x + y;
	printf("The sum is %d",c);
}
