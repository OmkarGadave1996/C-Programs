#include <stdio.h>
#include <string.h>
void mystrcmp(char*, char*);
void main()
{
	char arr[5] = "vxxyz";
	char brr[5]= "abc";
	mystrcmp(brr,arr);
}
void mystrcmp(char* brr, char* arr)
{
    int i = 0, j = 0;
    while (arr[i] != '\0')
        i++;
    while (brr[j] != '\0')
        j++;
    if(i++ > j++)
    {
        printf("-1");
    }
    else if(i++ == j++)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
}