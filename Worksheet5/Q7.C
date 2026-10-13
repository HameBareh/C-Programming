#include<stdio.h>
#include<conio.h>
float sine(float x){
    int i, j;
    float sum, power, fact, term;
    sum=0;
    for(i=1;i<=10;i++)
    {
        power = 1;
        fact = 1;
        for(j=1;j<=2*i-1;j++)
        {
            power=power*x;
            fact=fact*j;
        }
        term =power/fact;
        if(i%2==0)
        {
            sum= sum - term;
        }
        else 
        {
            sum = sum + term;
        }
    }
    return sum;
}
void main()
{
    float x, result;
    clrscr();
    printf("\nEnter x in radians: ");
    scanf("%f",&x);
    result = sine(x);
    printf("\nSin(x) = %.2f",result);
    getch();
}