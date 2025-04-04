/*Sum of 2 digit number*/
#include<stdio.h>
void main()
{
	int num,q,r,sum;
	num = 25;
	q = num/10;
	r = num%10;
	sum = q + r;
	printf("The sum of 2 digit numbers is %d",sum);
	return;
}