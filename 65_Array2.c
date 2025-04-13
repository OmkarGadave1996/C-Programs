/*Array*/
#include<stdio.h>
void main()
{
	int a[5] = {10} ,i;
	for(i=0;i<5;i++)
	{
		printf("The Element at %d Position is %d\n",i,a[i]);
		printf("%u\n",&a[0]);
		printf("%u\n",a);
	}
}