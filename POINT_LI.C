#include<stdio.h>
#include<math.h>
void main(){
	float x, y, r, px, py, d;

	clrscr();

	printf("Enter the center coordinate (x,y): " );
	scanf("%f %f",&x,&y);

	printf("Enter the Radius: ");
	scanf("%f",&r);

	printf("Enter point coordinates (x,y): ");
	scanf("%f %f",&px,&py);

	d =sqrt(pow(px -x,2) + pow(py - y,2));

	if(d<r){
	printf("Point lies inside Circle.");
	}else if(d==r){
	printf("Point lies on the Circle.");
	}else{
	printf("Point Lies Outside the Circle.");
	}
	getch();
}