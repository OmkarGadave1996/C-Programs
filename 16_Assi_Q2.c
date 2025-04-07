/*2. Finding area and perimeter of rectangle or circle. */
#include<stdio.h>
void main()
{
	//Area of circle
	int r = 5,area;
	area = 3.14 * r * r;
	printf("The Radius %d & Area of circle is: %d\n",r,area);

	//Perimeter of circle
	area = 2 * 3.14 * r;
	printf("The Radius %d & Perimeter of circle is: %d\n",r,area);

	//User input
	printf("Enter the radius of circle: \n");
	scanf("%d",&r);
	area = 3.14 * r * r;
	printf("The Radius %d & Area of circle is: %d\n",r,area);

	//Perimeter of circle
	area = 2 * 3.14 * r;
	printf("The Radius %d & Perimeter of circle is: %d\n",r,area);

	//Area of Rectangle
	int l = 15, w = 10;
	area = l * w;
	printf("The length %d & Width %d & Area of Rectangle is: %d\n",l,w,area);

	//Perimeter of Rectangle
	area =2*(l + w);
	printf("The length %d & Width %d & Perimeter of Rectangle is: %d\n",l,w,area);

	//User input
	printf("Enter the length of Rectangle: \n");
	scanf("%d",&l);
	printf("Enter the Width of Rectangle: \n");
	scanf("%d",&w);
	area = l * w;
	printf("The length %d & breadth %d & Area of Rectangle is: %d\n",l,w,area);

	//Perimeter of Rectangle
	area =2*(l + w);
	printf("The length %d & Width %d & Perimeter of Rectangle is: %d\n",l,w,area);
}