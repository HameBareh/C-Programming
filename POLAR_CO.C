#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float x, y, r, phi;

	clrscr();

	printf("Enter the X: ");
	scanf("%f",&x);
	printf("Enter the Y: ");
	scanf("%f",&y);

	r = sqrt(x * x + y * y);

	phi = atan( y/x);

	printf("Polar Co-ordinates is \n");
	printf("r = %.2f\n",r);
	printf("Phi = %2.f radians",phi);
	getch();
	}