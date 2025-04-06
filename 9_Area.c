/*Area of Circlr,Rectangle,Squre,Triangle*/
#include<stdio.h>
void main()
{
	//Area of circle
	int r = 5,area;
	area = 3.14 * r * r;
	printf("The Radius %d & Area of circle is: %d\n",r,area);
	//User input
	printf("Enter the radius of circle: \n");
	scanf("%d",&r);
	area = 3.14 * r * r;
	printf("The Radius %d & Area of circle is: %d\n",r,area);

	//Area of Squre
	int s = 5;
	area = s * s;
	printf("The Side %d & Area of Squre is: %d\n",s,area);
	//User input
	printf("Enter the Side of Squre: \n");
	scanf("%d",&s);
	area = s * s;
	printf("The Side %d & Area of Squre is: %d\n",s,area);


	//Area of Rectangle
	int l = 15, b = 10;
	area = l * b;
	printf("The length %d & breadth %d & Area of Rectangle is: %d\n",l,b,area);
	//User input
	printf("Enter the length of Rectangle: \n");
	scanf("%d",&l);
	printf("Enter the breadth of Rectangle: \n");
	scanf("%d",&b);
	area = l * b;
	printf("The length %d & breadth %d & Area of Rectangle is: %d\n",l,b,area);

	//Area of Triangle
	int h = 15, bs = 10;
	area = 0.5 * h * bs;
	printf("The Height %d & Base %d &Area of Triangle is: %d\n",h,bs,area);
	//User input
	printf("Enter the Height of Triangle: \n");
	scanf("%d",&h);
	printf("Enter the base of Triangle: \n");
	scanf("%d",&bs);
	area = l * bs;
	printf("The Height %d & Base %d &Area of Triangle is: %d\n",h,bs,area);
	return;		
}