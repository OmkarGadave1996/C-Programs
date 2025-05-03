/*Strcpy Function*/
#include <stdio.h>
char* mystrchr(char* , char );
int main()
{
    char arr[] = "Hellow World";
    char* result = mystrchr(arr, 'W');
    if (result != NULL)
        printf("Found: %s\n", result);  // prints from 'w' to end
    else
        printf("Character not found.\n");
    return 0;
}

char* mystrchr(char* arr, char x)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == x)
            return &arr[i];  // return pointer to the first match
        i++;
    }
    return NULL;  // not found
}
