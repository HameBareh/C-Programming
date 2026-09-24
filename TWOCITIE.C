#include<stdio.h>
#include<conio.h>
void main(){


	float km, meter, cm, feet, inches;

	clrscr();

	printf(" Enter distance in Kilometers between Two Cities: ");
	scanf("%f",&km);
	meter = km * 1000;
	cm = meter * 100;
	feet = meter * 3.28;
	inches = feet * 12;
	printf(" \nDistance in Meters = %.2f", meter);

	printf(" \nDistance in Centimeters = %.2f", cm);

	printf(" \nDistance in Feet = %.2f", feet);

	printf(" \nDistance in inches = %.2f", inches);

	getch();
	}