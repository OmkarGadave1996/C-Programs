/*Structure*/
#include<stdio.h>
#include<string.h>
struct Student
{
	int roll;
	char name[20];
};
void main()
{
	struct Student s1;
	struct Student s2;
	s1.roll = 10;
	strcpy(s1.name,"Sachin");
	printf("Enter the roll number: ");
	scanf("%d",&s2.roll);
	printf("Enter the name: ");
	scanf("%s",&s2.name);
	printf("%d\n",s1.roll);
	printf("%s\n",s1.name);
	printf("%d\n",s2.roll);
	printf("%s\n",s2.name);
}