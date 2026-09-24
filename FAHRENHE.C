#include<stdio.h>
#include<conio.h>
void main(){
	float fahrenheit, centigrade;
	clrscr();

	printf(" Enter the Temperature of City in Farenheit: ");
	scanf("%f",&fahrenheit);

	centigrade = (fahrenheit - 32) * 5/9;

	printf("Temperature in Centigrade = %.2f", centigrade);
	getch();
	}

