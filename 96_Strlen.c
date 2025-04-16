/*Strlen Function*/
#include<stdio.h>
int mystrlen(char*);
void main()
{
	int len;
	char arr[20] = "xyz";
	len = mystrlen(arr);
	printf("%d",len);
}
int mystrlen(char* ptr)
{
	int i = 0;
	while(ptr[i] != 0)
	{
		i++;
	}
	return i;
}