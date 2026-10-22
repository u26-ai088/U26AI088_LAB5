#include<stdio.h>
int main()
{
    int a[10],b[10],temp[10],i;
    printf("enter array 1 \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter array 2 \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("\nBefore swap\n");
    printf("array 1 : ");
    for(i=0;i<10;i++)
    {
        printf("%5d",a[i]);
    }
    printf("\narray 2 : ");
    for(i=0;i<10;i++)
    {
        printf("%5d",b[i]);
    }

    for(i=0;i<10;i++)
    {
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
    }

    printf("\nAfter swap\n");
    printf("array 1 : ");
    for(i=0;i<10;i++)
    {
        printf("%5d",a[i]);
    }
    printf("\narray 2 : ");
    for(i=0;i<10;i++)
    {
        printf("%5d",b[i]);
    }
    return 0;
}