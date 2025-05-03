#include <stdio.h>
#include <string.h>
char* mystrcat(char*, char*);
void main()
{
	char arr[5] = "xyz ";
	char brr[5]= "abc";
	mystrcat(brr,arr);
	printf("%s",arr);
}
char* mystrcat(char* brr, char* arr)
{
    int i = 0, j = 0;
    // Move to the end of arr
    while (arr[i] != '\0')
        i++;
    // Copy characters from brr to arr
    while (brr[j] != '\0')
    {
        arr[i] = brr[j];
        i++;
        j++;
    }
    arr[i] = '\0';  // Null-terminate the new string
    return arr;
}