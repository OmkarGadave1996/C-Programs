/*Armstrong Number*/
#include<stdio.h>
void main()
{
	int num , sum = 0, rem, p, c;
	printf("Enter the Number: \n");
	scanf("%d",&num);
	p = num; 
	while(num!=0)
	{
		rem = num % 10;
		c = rem * rem * rem;
		sum  = sum + c;
		num = num / 10; 	
	}
	printf("The Sum of Cubes of Each Digit is: %d\n",sum);
	if(p==sum)
	{
		printf("It is an Armstrong Number");
	}
	else
	{
		printf("It is Not an Armstrong Number");
	}
}