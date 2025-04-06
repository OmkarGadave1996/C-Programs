/*Days to year,month,days conersion*/
#include<stdio.h>
void main()
{
	int Day,dd,mm,yy;
	printf("Enter the Days: \n");
	scanf("%d",&Day);
	yy = Day/365; 
	mm = (Day%365)/30;
	dd = (Day%365)%30;
	printf("Days are represented as:\n %d years\n %d months\n %d days",yy,mm,dd);			
}