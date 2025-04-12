/* Pointer to function a parameter*/
#include<stdio.h>
int* myfun(int*);
void main()
{
	int a = 10;
	int* ptr;
	ptr = myfun(&a);
	printf("%d",*ptr);
	return;
}
int* myfun(int* b)
{
	*b = 40;
	return b;
}