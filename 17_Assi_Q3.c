/*3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number*/
#include<stdio.h>
void main()
{
	int num,q,r,q1,r1,sum,rev;
	num = 256;
	q = num/10;
	r = num%10;
	q1 = q/10;
	r1 = q%10;
	sum = q1 + r1 + r;
	rev = r * 100 + r1 * 10 + q1;
	printf("The sum of 3 digit numbers is %d\n",sum);
	printf("The reverse of 3 digit numbers is %d",rev);
	return;
}