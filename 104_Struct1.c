/*Structure*/
#include<stdio.h>
#include<string.h>
struct date
{
	int day;
	int month;
	int year;
};
void main()
{
	struct date d1;
	d1.day = 10;
	d1.month = 5;
	d1.year = 2024;
	printf("%d\n",d1.day);
	printf("%d\n",d1.month);
	printf("%d\n",d1.year);
}