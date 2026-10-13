#include<stdio.h>
#include<conio.h>
int main(){
	float maths, science, social, english, khasi;
	float aggregate_marks;
	float percentage;
	clrscr();

	printf(" Enter the Marks obtained by a student in 5 subject: ");
	scanf("%f",&maths);
	scanf("%f",&science);
	scanf("%f",&social);
	scanf("%f",&english);
	scanf("%f",&khasi);

	aggregate_marks = maths + science + social + english + khasi;

	percentage =(aggregate_marks/500)*100;

	printf("Aggregate Marks: %.2f\n",aggregate_marks);
	printf("Percentage : %.2f%",percentage);
	getch();
	return 0;
	}
