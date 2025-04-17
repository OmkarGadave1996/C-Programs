/*Structure*/
#include<stdio.h>
#include<string.h>
struct time
{
	int Hrs;
	int Min;
	int Sec;
};
void main()
{
	struct time t1;
	t1.Hrs = 10;
	t1.Min = 55;
	t1.Sec = 20;
	printf("%d\n",t1.Hrs);
	printf("%d\n",t1.Min);
	printf("%d\n",t1.Sec);
}