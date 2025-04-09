/*Do_while loop table*/
#include<stdio.h>
void main()
{
	int i = 1,j;
	do
	{
		j = 1;
		do
		{			
			printf("%d\t",i*j);
			j++;
		}
		while(j<=10);
		printf("\n");
		i++;
		
	}
	while(i<=10);
}