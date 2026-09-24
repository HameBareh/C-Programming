#include<stdio.h>
#include<conio.h>
void main(){
	float a, b, c;

	clrscr();

	printf("Enter the Side A: ");
	scanf("%f",&a);
	printf("Enter the Side B: ");
	scanf("%f",&b);
	printf("Enter the Side C: ");
	scanf("%f",&c);

	if(a+b+c == 180){
	printf("Triangle is Valid");
	}else{
	printf("Triangle is not Valid");
	}

	getch();
	}