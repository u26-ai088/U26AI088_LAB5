#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("enter values of 1st array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter values of 2st array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("\narray 1: ");
    for(i=0;i<10;i++)
    {
        printf("%5d",a[i]);
    }
    printf("\narray 2: ");
    for(i=0;i<10;i++)
    {
        printf("%5d",b[i]);
    }
    printf("\nsum of two arrays : ");
    for(i=0;i<10;i++)
    {
        printf("%5d",a[i]+b[i]);
    }
    return 0;
}