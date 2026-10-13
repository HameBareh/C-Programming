#include<stdio.h>
#include<conio.h>
#define MAX 50

void input(int a[MAX][MAX], int m, int n);
void display(int a[MAX][MAX], int m, int n);
void transpose(int a[MAX][MAX], int m, int n);

void main()
{
    int a[MAX][MAX], m, n;

    clrscr();

a:
    printf("\nEnter the number of Rows: ");
    scanf("%d",&m);

    printf("\nEnter the number of Columns: ");
    scanf("%d",&n);

    if(m>MAX || n>MAX || m<=0 || n<=0)
    {
	printf("\nRows and columns must be between 1 and 50\n");
	goto a;
    }

    input(a,m,n);

    printf("\nOriginal Matrix:\n");
    display(a,m,n);

    transpose(a,m,n);

    getch();
}

void input(int a[MAX][MAX], int m, int n)
{
    int i,j;

    printf("\nEnter the elements of Matrix:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int a[MAX][MAX], int m, int n)
{
    int i,j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[MAX][MAX], int m, int n)
{
    int t[MAX][MAX], i, j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            t[j][i]=a[i][j];
        }
    }

    printf("\nTranspose of Matrix:\n");

    display(t,n,m);
}
