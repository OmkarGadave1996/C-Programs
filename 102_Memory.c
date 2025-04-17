/*Memory Leakage Solution*/
#include<stdio.h>
#include<stdlib.h>
//int myfun(); Solution 1
void myfun();
void main()
{
	//int p;
	//p = myfun();	
	myfun();
}
void myfun()
{
	int* ptr;
	ptr = malloc(200);
	//return ptr; befor it some code
	free(ptr); //befor it some code	
}
//Danggling pointer examples is this because using both memory leakage solution together & it creates Unauthorised access
