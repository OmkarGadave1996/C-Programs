/* 4th Type Function*/
#include<stdio.h>
int add(int,int);
void main()
{
	int a = 10, b = 20, ans;
	ans = add(a,b);
	printf("The Answer is %d",ans);
}
int add(int x, int y)
{
	int c;
	c = x + y;
	return c;
}
