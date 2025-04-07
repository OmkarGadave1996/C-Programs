/*1. Finding F from C (temp).*/
#include<stdio.h>
void main()
{
	float f,C;
	printf("Enter the temperature in Celcius : ");
	scanf("%f",&C);
	f = (C*1.8) +32;
	printf("Temperature in Fahrenheit : %f",f);
}