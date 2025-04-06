/*Uniary Operator*/
#include<stdio.h>
void main()
{
	int a = 10,b,c,d;
	b = a++; //Post Increment
	printf("A: %d\t",a);
	printf("B: %d\n",b);

	b = ++a; //Pre Increment
	printf("A: %d\t",a);
	printf("B: %d\n",b);
	
	a =10,b = 20;
	c = a++ || b++;
	printf("%d\t %d\t %d\n",a,b,c);

	a = 10, b = 0;
	d = b++ || a++;
	printf("%d\t %d\t %d\n",a,b,d);

	a = 10;
	printf("%d\t %d\t %d\n",a++,++a,a++);
	return;
}