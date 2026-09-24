#include<stdio.h>
void main(){
	int a, b, i=1, result =1;
	clrscr();

	printf(" Enter the two numbers: ");
	scanf("%d %d",&a,&b);

	while(i<=b){
	result = result * a;
	i++;
	}
	printf("%d raised to the power %d is %d",a,b,result);
	getch();
	}