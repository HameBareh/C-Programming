#include<stdio.h>
#include<conio.h>
#define MAX 50
void main()
{
    int arr[MAX], n, i;
    int positive=0, negative=0, even=0,odd=0;
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
    printf("\nThe Array elements are:\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    
    if(arr[i]>0)
    {
        positive++;
    }
    else if(arr[i]<0)
    {
        negative++;
    }
     if(arr[i]%2==0)
    {
        even++;
    }
    else{
        odd++;
    }
}
    printf("\nThe Positive numbers = %d",positive);
    printf("\nThe Negative numbers = %d",negative);
    printf("\nThe Even numbers = %d",even);
    printf("\nThe Odd numbers = %d",odd);
    getch();
}