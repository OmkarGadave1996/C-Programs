/* Pointer variable to another pointer variable*/
#include<stdio.h>
void main()
{
	int a = 10;
	int* p;
	int* ptr;
	p = &a;
	ptr = p;
	printf("%d\n",*ptr);
	return;
}