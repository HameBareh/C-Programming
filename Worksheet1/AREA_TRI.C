#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float area, a, b, c, s;

	clrscr();

	printf("Enter the Side A: ");
	scanf("%f",&a);
	printf("Enter the Side B: ");
	scanf("%f",&b);
	printf("Enter the Side C: ");
	scanf("%f",&c);

	s = (a + b + c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("The Area of a Triangle is %.2f",area);

	getch();
	}




