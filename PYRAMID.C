#include<stdio.h>
void main(){
	int i, j, k, num=1, rows;
	clrscr();
	printf("Enter a rows: ");
	scanf("%d",&rows);

	for(i=1; i<=rows;i++){
		for(k = rows; k>i;k--){
		printf(" ");
		}
			for(j =1;j<=i;j++){
			printf("%d ",num);
			num++;
			}
			printf("\n");
	}
	getch();
}
