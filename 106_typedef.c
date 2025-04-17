/*Typedef*/
#include<stdio.h>
#include<string.h>
typedef struct Student
{
	int roll;
 	char name[20];
}Student;
Student storevalue(Student);
void main()
{
	Student s1;
	s1 = storevalue(s1);
	printf("%d\n",s1.roll);
	printf("%s\n",s1.name);
}
Student storevalue(Student s1)
{
	s1.roll = 10;
	strcpy(s1.name,"Sachin");
	return s1;
}