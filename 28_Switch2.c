/*Switch Case Example*/
#include<stdio.h>
void main()
{
	int ch,a,b,c;
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Find Reminder\n");
	printf("Enter the choice\n");
	scanf("%d",&ch);
	printf("Enter the 1st value: \n");
	scanf("%d",&a);
	printf("Enter the 2nd value: \n");
	scanf("%d",&b);
	switch(ch)
	{
		case 1:
			printf("Addition\n");
			c = a + b;
			printf("Addition is %d ",c);
			break;
		case 2:
			printf("Substraction\n");
			c = a - b;
			printf("Substraction is %d ",c);
			break;
		case 3:
			printf("Multiplication\n");
			c = a * b;
			printf("Multiplication is %d ",c);
			break;
		case 4:
			printf("Division\n");
			c = a / b;
			printf("Division is %d ",c);
			break;
		case 5:
			printf("Find Reminder\n");
			c = a % b;
			printf("Reminder is %d ",c);
			break;
		default:
			printf("Wrong Choice");
	}
}