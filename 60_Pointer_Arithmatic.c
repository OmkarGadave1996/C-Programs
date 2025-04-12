/*Pointer Arithmatics*/
#include<stdio.h>
void main()
{
	int a = 10;
	char ch = 'f';
	double dl = 20.8;
	int* iptr;
	char* cptr;
	double* dptr;
	iptr = &a;
	cptr = &ch;
	dptr = &dl;
	printf("%u\n",iptr);
	printf("%u\n",cptr);
	printf("%u\n",dptr);
	printf("%u\n",&iptr);
	printf("%u\n",&cptr);
	printf("%u\n",&dptr);
	return;
}
