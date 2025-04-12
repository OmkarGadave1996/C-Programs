/*Wild Pointer*/
#include<stdio.h>
void main()
{
	int a = 10;
	int* ptr;
	*ptr = 40; // but it si UnAuthorised access
	printf("%d\n",*ptr);
	return;	
}