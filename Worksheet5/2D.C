#include<stdio.h>
#include<conio.h>
#define MAX 50
void input(int a[MAX][MAX],int row, int col);
void display(int a[MAX][MAX], int row, int col);
void main(){
    int arr[MAX][MAX], row, col;
    clrscr();
    a:
    printf("\nEnter the number of Row: ");
    scanf("%d",&row);
    printf("\nEnter the number of Column: ");
    scanf("%d",&col);
    if(row!=col){
	printf("\nThe Number of Row and Column should be equal");
	goto a;
    }
    input(arr,row,col);
    display(arr,row,col);
    getch();
}
void input(int arr[MAX][MAX],int row, int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
        printf("\nEnter the element: ");
        scanf("%d",&arr[i][j]);
        }
    }
}
void display(int arr[MAX][MAX],int row, int col){
    int i,j;
    printf("\n The Array elements are:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}