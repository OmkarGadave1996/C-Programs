/*Switch Case*/
#include<stdio.h>
void main()
{
	int ch;
	printf("Enter the choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		default:
			printf("Wrong Choice");
	}
}