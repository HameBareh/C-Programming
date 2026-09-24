#include<stdio.h>
#include<conio.h>
void main(){
	int c, d, temp;

	clrscr();

	printf("Enter the C location: ");
	scanf("%d",&c);

	printf("Enter the D location: ");
	scanf("%d",&d);

	printf(" C and D before Interchange  C=%d D=%d\n",c,d);

	temp=c;
	c=d;
	d=temp;

	printf("C and D after Interchange C=%d D=%d",c,d);

	getch();
	}