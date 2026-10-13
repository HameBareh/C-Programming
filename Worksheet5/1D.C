#include<stdio.h>
#include<conio.h>
#define MAX 50
void input(int arr[MAX], int n);
void display(int arr[MAX], int n);
void main(){
    int arr[MAX], n;
    clrscr();
    printf("\nEnter the number of Element: ");
    scanf("%d",&n);
    input(arr,n);
    display(arr,n);
    getch();
}
void input(int arr[MAX], int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nEnter the element: ");
        scanf("%d",&arr[i]);
    }
}
void display(int arr[MAX], int n){
    int i;
    printf("\n The Array elements are:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}