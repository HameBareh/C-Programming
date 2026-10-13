#include<stdio.h>
#include<conio.h>
#include<math.h>
int area_triangle(int, int, int);
void main()
{
    int a, b, c;
    float result;
    clrscr();
    //The sum of a+b>c for triangle
    printf("\nEnter the side of triangle a b c: ");
    scanf("%d%d%d",&a,&b,&c);
    result=area_triangle(a,b,c);
    printf("\nThe Area of Triangle is %.2f",result);
    getch();
}
int area_triangle(int a, int b, int c)
{
    float s, area;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c)); 
    return area;
}