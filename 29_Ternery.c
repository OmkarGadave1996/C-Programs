/*Ternery Operator*/
#include<stdio.h>
void main()
{
	int a,b,c,max, ans;
	printf("Enter the three Values: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	max = a > b ? a : b;
	ans = max > c ? max : c;
	printf("The Maximum number is: %d\n",ans);
	
	max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("The Maximum number is: %d",max);
	return;
}