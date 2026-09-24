#include<stdio.h>
#include<conio.h>
void main(){
	float cost_price, selling_price;

	clrscr();

	printf("Enter the Cost Price: ");
	scanf("%f",&cost_price);

	printf("Enter the Selling Price: ");
	scanf("%f",&selling_price);

	if(selling_price > cost_price){
		float profit = selling_price - cost_price;
		float	profit_percentage=(profit/cost_price)*100;
		printf(" The Profit made is %.2f",profit_percentage);
		}else{
		flaot loss = cost_price - selling_price;
		float loss_percentage=(loss/cost_price)*100;
		printf("The Incured Loss is %.2f",loss_percentage);
		}
		getch();
		}