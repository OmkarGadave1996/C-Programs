/*Array Structure*/
#include<stdio.h>
typedef struct Student{
	int roll;
	char name[20]; 
}Student;
void arraystore(Student*, int);
void arrayprint(Student*, int);
void main()
{
	Student arr[3];
	arraystore(arr,3);
	arrayprint(arr,3);
}
void arraystore(Student* ptr, int t)
{
	int i =0;
	for(i=0;i<t;i++)
	{	
		printf("Enter the student Roll no.: \n");
		scanf("%d",&ptr[i].roll);
		printf("Enter the student Name: \n");
		scanf("%s",&ptr[i].name);
	}
}
void arrayprint(Student* ptr, int t)
{
	int i =0;
	for(i=0;i<t;i++)
	{
		printf("%d\n",ptr[i].roll);
		printf("%s\n",ptr[i].name);
	}
}	