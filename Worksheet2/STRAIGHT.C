#include<stdio.h>
void main(){
	float x1, x2, x3, y1, y2, y3;
	clrscr();

	printf("Enter X1 Y1: ");
	scanf("%f %f",&x1,&y1);
	printf("Enter X2 Y2: ");
	scanf("%f %f",&x2,&y2);
	printf("Enter X3 Y3: ");
	scanf("%f %f",&x3,&y3);

	if((y2-y1) * (x3-x1) == (y3-y1) * (x2-x1)){
	printf("All Three Points fall on one Straight Line");
	}else{
	printf("Three Points does not fall on one straight line");
	}

	getch();

	}