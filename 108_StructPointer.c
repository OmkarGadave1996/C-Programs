/*Pointer-to-one-structure-variable*/
#include<stdio.h>
#include<string.h>
typedef struct Student{
	int roll;
	char name[20]; 
}Student;
void display(Student*);
void main()
{
	Student s1;
	display(&s1);
	printf("%d\n",s1.roll);
	printf("%s\n",s1.name);
}
void display(Student* this)
{
	this -> roll = 10;
	strcpy(this -> name,"sachin");
}
	