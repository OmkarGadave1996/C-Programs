/*do_while Loop*/
#include<stdio.h>
void main()
{
	//Increment
	int i = 0;
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=10);
	printf("\n");
	//Decrement
	do
	{
		printf("%d\n",i);
		i--;
	}
	while(i>=0);
}