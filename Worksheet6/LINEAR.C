#include<stdio.h>
#include<conio.h>
#define MAX 50

void input(int a[MAX], int n);
void display(int a[MAX], int n);
void linear(int a[MAX], int n);

void main()
{
    int a[MAX], n;

    clrscr();

a:
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);

    if(n>MAX ||  n<=0)
    {
	printf("\nSize  must be between 1 and 50\n");
	goto a;
    }

    input(a,n);
    display(a,n);

    linear(a,n);

    getch();
}

void input(int a[MAX], int n)
{
    int i;

    printf("\nEnter the elements of Matrix:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int a[MAX], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void linear(int a[MAX], int n)
{
    int i,item, count=0;
    printf("\nEnter the item to search: ");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
	if(item==a[i])
        {
	        count++;
	    }
    }
    if(count>0)
        {
        printf("\nItem %d appears %d times",item,count);
        }
    else
        {
        printf("\nItem is not Found");
        }
}