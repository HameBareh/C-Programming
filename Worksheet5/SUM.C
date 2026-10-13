#include<stdio.h>
#include<conio.h>
int sum_even(int n){
    if(n==0)
        return 0;
    else
	return n + sum_even(n-2);
}
int sum_odd(int n){
    if(n==1)
	return 1;
    else
	return n + sum_odd(n-2);
}
void main(){
    int n, sum;
    clrscr();
    printf("\nEnter the number: ");
    scanf("%d",&n);
    if(n%2==0){
        sum=sum_even(n);
        printf("\nThe sum of Even numbers of %d are %d",n,sum);
    }
    else{
        sum=sum_odd(n);
        printf("\nThe sum of Odd numbers of %d are %d",n,sum);
    }
    getch();
}