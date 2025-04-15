/*String Strcpy*/
#include <stdio.h>
#include <string.h>
void main()
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d\n", strlen(alphabet));

	char alphabet1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d\n", strlen(alphabet1)); // 26
	printf("%d\n", sizeof(alphabet1)); // 27
	
	char alphabet2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%d\n", strlen(alphabet2)); // 26
	printf("%d\n", sizeof(alphabet2)); // 50

	char str1[20] = "Hello ";
	char str2[] = "World!";
	// Concatenate str2 to str1 (result is stored in str1)
	strcat(str1, str2);
	// Print str1
	printf("%s\n", str1);

	char str3[20] = "Hello World!";
	char str4[20];
	// Copy str3 to str4
	strcpy(str4, str3);
	// Print str4
	printf("%s\n", str4);

	char str5[] = "Hello";
	char str6[] = "Hello";
	char str7[] = "Hi";
	// Compare str5 and str6, and print the result
	printf("%d\n", strcmp(str5, str6)); // Returns 0 (the strings are equal)
	// Compare str5 and str7, and print the result
	printf("%d\n", strcmp(str5, str7)); // Returns -1 (the strings are not equal)

	char myStr[] = "Hello World";
	char *myPtr = strchr(myStr, 'W');
	if (myPtr != NULL) {
	 	printf("%s\n", myPtr);
	}

	char myStr1[] = "The rain in Spain falls mainly on the plains";
	char *myPtr1 = strstr(myStr1, "ain");
	if (myPtr1 != NULL) {
 		printf("%s\n", myPtr1);
	}	
	
	char myStr2[20] = "Hello";
	strncat(myStr2, " World!", 5);
	printf("%s\n", myStr2);

	char myStr3[] = "ABCD";
	char myStr4[] = "ABCE";
	int cmp = strncmp(myStr3, myStr4, 3);
	if (cmp > 0) {
		printf("%s is greater than  %s \n",myStr3,myStr4);
	} else if (cmp < 0) {
		printf("%s is greater than  %s \n",myStr4,myStr3);
	} else {
		printf("%s  is equal to  %s \n",myStr3,myStr4);
	}

	char str9[] = "Hello World!";
	char str10[] = "Write code!";
	strncpy(str10, str9, 6);
	printf("%s\n", str9);
	printf("%s\n", str10);

	char myStr5[] = "Learn C++ at W3schools";
	char * myPtr5 = strtok(myStr5, " ");
	while(myPtr5 != NULL) {
		printf("%s\n",myPtr5);
		myPtr5 = strtok(NULL, " ");
	}

	char str[] = "HeLlO wOrLd";

	printf("\nOriginal string: %s\n", str);
	printf("Lowercase string: %s\n", strlwr(str));
	printf("Uppercase string: %s\n", strupr(str));
	printf("Reversed string: %s\n", strrev(str));

	// memchr()	Returns a pointer to the first occurrence of a value in a block of memory
	// memcmp()	Compares two blocks of memory to determine which one represents a larger numeric value
	// memcpy()	Copies data from one block of memory to another
	// memmove()	Copies data from one block of memory to another accounting for the possibility that the blocks of memory overlap
	// memset()	Sets all of the bytes in a block of memory to the same value
	// strcat()	Appends one string to the end of another
	// strchr()	Returns a pointer to the first occurrence of a character in a string
	// strcmp()	Compares the ASCII values of characters in two strings to determine which string has a higher value
	// strcoll()	Compares the locale-based values of characters in two strings to determine which string has a higher value
	// strcpy()	Copies the characters of a string into the memory of another string
	// strcspn()	Returns the length of a string up to the first occurrence of one of the specified characters
	// strerror()	Returns a string describing the meaning of an error code
	// strlen()	Return the length of a string
	// strncat()	Appends a number of characters from a string to the end of another string
	// strncmp()	Compares the ASCII values of a specified number of characters in two strings to determine which string has a higher value
	// strncpy()	Copies a number of characters from one string into the memory of another string
	// strpbrk()	Returns a pointer to the first position in a string which contains one of the specified characters
	// strrchr()	Returns a pointer to the last occurrence of a character in a string
	// strspn()	Returns the length of a string up to the first character which is not one of the specified characters
	// strstr()	Returns a pointer to the first occurrence of a string in another string
	// strtok()	Splits a string into pieces using delimiters
	// strxfrm()	Convert characters in a string from ASCII encoding to the encoding of the current locale
}
