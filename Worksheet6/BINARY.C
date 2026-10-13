#include<stdio.h>
#include<conio.h>
#define MAX 50

void input(int a[MAX], int n);
void display(int a[MAX], int n);
void selection(int a[MAX], int n);
void binary(int a[MAX], int n);

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
    printf("\nArray before selection sort: ");
    display(a,n);

    selection(a,n);
    printf("\nArray After selection sort: ");
    display(a,n);
    
    binary(a,n);

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
void selection(int a[MAX],int n)
{
    int i,j,temp, small;
    for(i=0;i<n-1;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
            {
                if(a[j]<a[small])
                {
                    small=j;
                }
            }
                temp=a[i];
                a[i]=a[small];
                a[small]=temp;
    }
}
void binary(int a[MAX], int n)
{
    int i,item, count=0;
    int low, high,mid;
    printf("\nEnter the item to search: ");
    scanf("%d",&item);

    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(item==a[mid])
        {
            break;
        }
        else if(item<a[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(low<=high)
    {
    for(i=0;i<n;i++)
        {
	        if(item==a[i])
            {
                count++;
            }
        }
        printf("\nItem %d appears %d times",item,count);
    }
    else
    {
        printf("\nItem is not Found");
    }
}