/* 1st Type Function*/
#include<stdio.h>
void add();
void myfun();
void ram();
void main()
{
	printf("Start\n");
	add();
	printf("Bye\n");
	printf("Start\n");
	myfun();
	printf("Bye\n");
	printf("Start\n");
	ram();
	printf("Bye\n");
	return;
}
void add()
{
	int a = 10, b = 20;
	int c;
	c = a + b;
	printf("%d\n",c);
}
void myfun()
{
	printf("Inside Function\n");
}
void ram()
{
	int a, b, c;
	printf("Enter the 1st Number:\n");
	scanf("%d",&a);
	printf("Enter the 2nd Number:\n");
	scanf("%d",&b);
	c = a + b;
	printf("%d\n",c);
}