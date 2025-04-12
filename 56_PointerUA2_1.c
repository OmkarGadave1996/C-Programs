/* Pointer to function a parameter*/
#include<stdio.h>
void myfun(int,int*,int*);
void main()
{
	int a = 10;
	int* p;
	p = &a;
	myfun(a,&a,p);
	return;
}
void myfun(int x, int* ptr,int* b)
{
	printf("%d",*b);
}