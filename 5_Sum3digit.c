/*Sum of 3 digit number*/
#include<stdio.h>
void main()
{
	int num,q,r,q1,r1,sum;
	num = 256;
	q = num/10;
	r = num%10;
	q1 = q/10;
	r1 = q%10;
	sum = q1 + r1 + r;
	printf("The sum of 3 digit numbers is %d",sum);
	return;
}