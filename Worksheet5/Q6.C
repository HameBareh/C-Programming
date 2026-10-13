#include<stdio.h>
#include<conio.h>
#include<math.h>

int sum(int a, int b, int c, int d, int e)
{
    return a+b+c+d+e;
}

float average(int total)
{
    return total/5.0;
}

float standard_deviation(int a, int b, int c, int d, int e, float avg)
{
    float sd;

    sd = sqrt(((a-avg)*(a-avg) +
               (b-avg)*(b-avg) +
               (c-avg)*(c-avg) +
               (d-avg)*(d-avg) +
               (e-avg)*(e-avg))/5.0);

    return sd;
}

void main()
{
    int a, b, c, d, e, total;
    float avg, sd;

    clrscr();

    printf("\nEnter five integers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    total = sum(a,b,c,d,e);
    avg = average(total);
    sd = standard_deviation(a,b,c,d,e,avg);

    printf("\nSum = %d",total);
    printf("\nAverage = %.2f",avg);
    printf("\nStandard Deviation = %.2f",sd);

    getch();
}
