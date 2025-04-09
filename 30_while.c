/*While Loop*/
#include<stdio.h>
void main()
{
	int a =0;
	while(a<3)
	{
		printf("%d\n",a);
		a++;
	}
	printf("Outside Loop %d\n",a);

	a =10;
	while(a>0)
	{
		printf("%d\n",a);
		a--;
	}	

	//Increment
	int i = 0;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	printf("\n");
	//Decrement
	while(i>=0)
	{
		printf("%d\n",i);
		i--;
	}
}