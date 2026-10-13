#include<stdio.h>
#include<conio.h>
int fact(int n){
    if(n==0)
        return 0;
    else
	return n * fact(n-1);
}
void main(){
    int n, factorail;
    clrscr();
    printf("\nEnter the number: ");
    scanf("%d",&n);
    factorial=fact(n);
    printf("\nThe Factorial numbers of %d is %d",n,factorial);
    getch();
}