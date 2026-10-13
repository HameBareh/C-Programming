#include<stdio.h>
#include<conio.h>
void main(){
	float bs, da, hra, gross;
	clrscr();

	printf(" Enter Basic Salary: ");
	scanf("%f",&bs);

	da = 0.40  * bs;
	hra = 0.20 * bs;

	 gross = bs * da * hra;

	printf(" The Total Gross Salary is %f", gross);
	getch();
	}