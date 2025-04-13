/*Array*/
#include<stdio.h>
void main()
{
	int a[5] = {10} ,i;
	int* ptr;
	ptr = &a[0];
	printf("%d\n",*ptr);
	printf("%d\n",*ptr + 0);
	printf("%d\n",*ptr + 1); // reality 10 + 1
	printf("%d\n",*ptr + 2); // reality 10 + 2	
	for(i=0;i<5;i++)
	{
		printf("%u\n",*(ptr + i));
		//or
		printf("%u\n",ptr[i]);		
	}
}