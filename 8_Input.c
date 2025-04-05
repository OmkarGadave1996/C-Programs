/*User Input*/
#include<stdio.h>

void main()
{
	int a;
	float b;
	double d;
	long l;
	char ch;
	printf("Character is \n");
	scanf("%c",&ch);
	printf("Int is \n");
	scanf("%d",&a);
	printf("Float is \n");
	scanf("%f",&b);
	printf("Double is \n");
	scanf("%f",&d);
	printf("Long is \n");
	scanf("%ld",&l);
	printf("Integer Value %d \n",a);
	printf("Integer Value in Octa %o \n",a);
	printf("Integer Value in Hexa %x \n",a);
	printf("Float Value %f \n",b);
	printf("Double Value in Exponatial notation %e\n",d);
	printf("Long Value %ld \n",l);
	printf("Character Value %c \n",ch);
	return;
}