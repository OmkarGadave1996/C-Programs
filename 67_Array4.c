/*Array*/
#include<stdio.h>
void display(int*, int);
void main()
{
	int a[5] = {10,20} ,i;
	display(a,5);
}	
void display(int* ptr,int a)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\t %u",ptr[i]);		
	}
}