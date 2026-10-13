#include<stdio.h>
#include<conio.h>
/*
//WITH RECURSIVE FUNCTION
int fact(int n){
    if(n==1)
	return 1;
    else
	return n * fact(n-1);
}*/
//WITHOUT RECURSIVE FUNCTION
int fact(int n){
    int i, factorial=1;
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
void main(){
    int n, factorial;
    clrscr();
    printf("\nEnter the number: ");
    scanf("%d",&n);
    factorial=fact(n);
    printf("\nThe Factorial numbers of %d is %d",n,factorial);
    getch();
}