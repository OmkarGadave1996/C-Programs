/* Return Pointer from function */
#include<stdio.h>
int* myfun();
void main()
{
	printf("%u",myfun());
	return;
}
int* myfun()
{
	int a = 10;
	int* ptr =&a;
	return ptr;
}