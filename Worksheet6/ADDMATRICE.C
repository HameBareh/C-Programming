
#include<stdio.h>
#include<conio.h>
#define MAX 50

void input(int a[MAX][MAX], int b[MAX][MAX],
           int r1, int c1, int r2, int c2);

void display(int a[MAX][MAX], int b[MAX][MAX],
             int r1, int c1, int r2, int c2);

void addition(int a[MAX][MAX], int b[MAX][MAX],
              int r1, int c1);

void multiplication(int a[MAX][MAX], int b[MAX][MAX],
                    int r1, int c1, int c2);
void main()
{
    int a[MAX][MAX], b[MAX][MAX];
    int r1, c1, r2, c2;

    clrscr();

a:
    printf("\nEnter the number of Rows of Matrix A: ");
    scanf("%d",&r1);

    printf("\nEnter the number of Columns of Matrix A: ");
    scanf("%d",&c1);

    printf("\nEnter the number of Rows of Matrix B: ");
    scanf("%d",&r2);

    printf("\nEnter the number of Columns of Matrix B: ");
    scanf("%d",&c2);

    if(r1>MAX || c1>MAX || r2>MAX || c2>MAX ||
       r1<=0 || c1<=0 || r2<=0 || c2<=0)
    {
        printf("\nRows and columns must be between 1 and 50\n");
        goto a;
    }
    if(r1!=r2 || c1!=c2 ||c1!=r2)
    {
        printf("\nRows and columns of both matrices must be equal\n");
        goto a;
    }
    input(a,b,r1,c1,r2,c2);
    display(a,b,r1,c1,r2,c2);
    addition(a,b,r1,c1);
    multiplication(a,b,r1,c1,c2);
    getch();
}

void input(int a[MAX][MAX], int b[MAX][MAX],
           int r1, int c1, int r2, int c2)
{
    int i,j;

    printf("\nEnter elements of Matrix A:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
}

void display(int a[MAX][MAX], int b[MAX][MAX],
             int r1, int c1, int r2, int c2)
{
    int i,j;

    printf("\nMatrix A:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

void addition(int a[MAX][MAX], int b[MAX][MAX],
              int r1, int c1)
{
    int sum[MAX][MAX], i, j;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nAddition of two matrices:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int a[MAX][MAX], int b[MAX][MAX],
                    int r1, int c1, int c2)
{
    int mul[MAX][MAX], i, j, k;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mul[i][j]=0;

            for(k=0;k<c1;k++)
            {
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    printf("\nMultiplication of two matrices:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}
