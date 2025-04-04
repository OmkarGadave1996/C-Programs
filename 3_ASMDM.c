/*Addition/Substraction/multiplication/Division*/
#include<stdio.h>
void main()
{
	int a = 22,b = 10,c; 
	c = a + b;
	printf("a is %d and b is %d Addition of both is %d \n",a,b,c);
	c = a - b;
	printf("a is %d and b is %d Substraction of both is %d \n",a,b,c);
	c = a * b;
	printf("a is %d and b is %d Multiplication of both is %d \n",a,b,c);
	c = a / b;
	printf("a is %d and b is %d Division of both is %d \n",a,b,c);
	c = a % b;
	printf("a is %d and b is %d Remnder after division of both is %d \n",a,b,c);
	return;	
}