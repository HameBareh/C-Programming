#include<stdio.h>
#include<conio.h>
#define MAX 50
void main()
{
    int arr[MAX], n,i, temp
    ;
    clrscr();
    a:
    printf("\nEnter the size of Array: ");
    scanf("%d",&n);
    if(n>MAX||n<=0)
    {
        printf("\nSize should be between 1 and 50\n");
        goto a;
    }
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element of Array: ");
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array elements Before Interchange the odd and even:\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i=i+2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    printf("\nThe Array elements After Interchange the odd and even:\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
}