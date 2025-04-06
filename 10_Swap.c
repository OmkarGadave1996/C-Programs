/*Swapping Program with third variable & without*/
#include<stdio.h>
void main()
{
	//Without Using third variable
	int a,b,c,d,temp;
	printf("Enter the 1st value: \n");
	scanf("%d",&a);
	printf("Enter the 2nd value: \n");
	scanf("%d",&b);
	printf("Values before Swapping: ");
	printf("A: %d\t B: %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Values after Swapping: ");
	printf("A: %d\t B: %d\n",a,b);

	//With Using third variable
	printf("Enter the 1st value: \n");
	scanf("%d",&c);
	printf("Enter the 2nd value: \n");
	scanf("%d",&d);
	printf("Values before Swapping: ");
	printf("C: %d\t D: %d\n",c,d);
	temp = c;
	c = d;
	d = temp;
	printf("Values after Swapping: ");
	printf("C: %d\t D: %d\n",c,d);
	return;
}