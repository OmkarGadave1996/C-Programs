/*RelationShip Operator*/
#include<stdio.h>

void main()
{
	int a = 10,b = 20, c;
	printf("Check for %d is greater then %d answer is %d \n", a,b,c=(a<b));
	printf("Check for %d is less then %d answer is %d\n", a,b,c=(a>b));
	printf("Check for %d is greater then or equal to %d answer is %d \n", a,b,c=(a<=b));
	printf("Check for %d is less then or equal to %d answer is %d \n", a,b,c=(a>=b));
	printf("Check for %d is equal to %d answer is %d \n", a,b,c=(a==b));
	printf("Check for %d is not equal to %d answer is %d \n", a,b,c=(a!=b));
	return;
}