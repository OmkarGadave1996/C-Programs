/* Pointer Use of Unsigned integer*/
#include<stdio.h>
void main()
{
	int a = 10;
	int* b;
	b = &a;
	printf("A,s Value %d\n",a);
	printf("A,s Address %u\n",&a);
	printf("B,s Value %u\n",b);
	printf("B,s Address %u\n",&b);
	return;
}