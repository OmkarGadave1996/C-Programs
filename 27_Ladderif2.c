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
	scanf("%d",&m4);
	printf("Enter Marks of Maths: \n");
	scanf("%d",&m5);
	total = m1+m2+m3+m4+m5;
	per = total/5.0;
	printf("Total of Marks: %d\n",total);	
	printf("Percentage of Student: %f\n",per);
	if(per>=90 && 100>per)
	{
		printf("A Grade");
	}
	else if(per>=75 && 90>per)
	{
		printf("B Grade");
	}
	else if(per>=50 && 75>per)
	{
		printf("C Grade");
	}
	else if(per>=35 && 50>per)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");				
	}								
	return;
}