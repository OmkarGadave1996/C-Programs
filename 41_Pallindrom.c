/*Pallindrom Number*/
#include<stdio.h>
void main()
{
	int num , rev = 0, rem, p;
	printf("Enter the Number: \n");
	scanf("%d",&num);
	p = num; 
	while(num!=0)
	{
		rem = num % 10;
		rev  = rev * 10 + rem;
		num = num / 10; 	
	}
	printf("The Reverse Number is: %d\n",rev);
	if(p==rev)
	{
		printf("It is Pallindrom Number");
	}
	else
	{
		printf("It is Not Pallindrom Number");
	}
}