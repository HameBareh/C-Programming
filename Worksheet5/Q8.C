#include<stdio.h>
#include<conio.h>
int gcd(int j, int k)
{
    int r, temp;
    while(k!=0)
    {
        r=j/k;//store the quotient
        temp=j-r*k;//store the remainder
        j=k;
        k=temp;
    }
    return j;
}
void main(){
    int j, k, result;
    clrscr();
    printf("\nEnter the value of J: ");
    scanf("%d",&j);
    printf("\nEnter the value of K: ");
    scanf("%d",&k);
    result=gcd(j,k);
    printf("\nGreatest Common Divisor = %d",result);
    getch();
}