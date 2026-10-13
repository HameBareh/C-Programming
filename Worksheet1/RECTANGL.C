#include<stdio.h>
#include<conio.h>
void main(){
	float length,breadth,radius;
	float area_rectangle,perimeter_rectangle;
	float area_circle, circumference_circle;
	clrscr();
	printf("Enter the length of a Rectangle: ");
	scanf("%f",&length);
	printf("Enter the breadth of a Rectangle: ");
	scanf("%f",&breadth);

	printf("Enter the Radius of a Circle: ");
	scanf("%f",&radius);

	area_rectangle=length * breadth;
	perimeter_rectangle=2 * (length+breadth);

	area_circle=3.14*radius*radius;
	circumference_circle=2*3.14*radius;

	printf(" Area of a Rectangle: %.2f\n",area_rectangle);
	printf(" Perimeter of a Rectangle %.2f\n",perimeter_rectangle);
	printf(" Area of a Circle %.2f\n",area_circle);
	printf(" Circumference of a Circle %.2f",circumference_circle);
	getch();
	}