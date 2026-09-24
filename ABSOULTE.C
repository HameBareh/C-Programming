#include<stdio.h>
#include<conio.h>
void main(){
	int num,absolute;

	clrscr();

	printf("Enter a Number: ");
	scanf("%d",&num);

	if(num < 0){
	int absolute = -num;
	printf(" The Absolute Number of %d is %d",num ,absolute);
	}else{
	absolute = num;
	printf("The Absolute Number of %d is %d",num,absolute);
	}
	getch();
}