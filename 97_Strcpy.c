/*Strcpy Function*/
#include<stdio.h>
char* mystrcpy(char*, char*);
void main()
{
	char arr[5] = "xyz";
	char brr[5];
	printf("%s",mystrcpy(brr,arr));
	//printf("%s",brr); also can write
}
char* mystrcpy(char* brr, char* arr)
{
	int i = 0;
	while(arr[i] != '\0')
	{
		brr[i] = arr[i];
		i++;
	}
	brr[i]='\0';
	return brr;
}