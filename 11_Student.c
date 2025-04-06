/*Student Example*/
#include<stdio.h>
void main()
{
	int rollno,m1,m2,m3,m4,m5,total;
	float per;
	char name;
	printf("Enter the name of student: \n");
	scanf("%s",&name);
	printf("Enter the Roll Number of student: \n");
	scanf("%d",&rollno);
	printf("Enter Marks of Marathi: \n");
	scanf("%d",&m1);
	printf("Enter Marks of Hindi: \n");
	scanf("%d",&m2);
	printf("Enter Marks of English: \n");
	scanf("%d",&m3);
	printf("Enter Marks of Science: \n");
	scanf("%d",m4);
	printf("Enter Marks of Maths: \n");
	scanf("%d",m5);
	total = m1+m2+m3+m4+m5;
	per = total/5.0;
	printf("Enter the Name of Student: %s\n",name);
	printf("Enter Roll Number of Student: %d\n",rollno);	
	printf("Enter Percentage of Student: %d",per);								
	return;
}