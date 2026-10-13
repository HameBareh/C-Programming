#include<stdio.h>
#include<conio.h>
#define MAX 50

void input(int a[MAX], int n);
void display(int a[MAX], int n);
void bubble_sort(int a[MAX], int n);
void insert_sort(int a[MAX], int n);
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
    printf("\nArray before sort: ");
    display(a,n);

    bubble_sort(a,n);
    printf("\nArray After sort: ");
    display(a,n);
    
    insert_sort(a,n);
    printf("\nArray After sort: ");
    display(a,n);

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
void bubble_sort(int a[MAX],int n)
{
    int i, j, temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void insert_sort(int a[MAX], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j=i-1;
        while(j >=0 && a[j] >temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}