#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter size of array ");
    scanf("%d",&n);
    int num[n];
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("initial array : ");
    for(i=0;i<n;i++)
    {
        printf("%5d",num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("\narray after bubble sort : ");
    for(i=0;i<n;i++)
    {
        printf("%5d",num[i]);
    }
    return 0;
}