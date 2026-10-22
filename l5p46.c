#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter size of array");
    scanf("%d",&n);
    int num[n];
    printf("enter numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(num[j]>num[j+1])
            {
                int c=num[j];
                num[j]=num[j+1];
                num[j+1]=c;
            }
        }
    }/*
    for(i=0;i<n;i++)
    {
        printf("%5d",num[i]);
    }
    printf("\n");*/
    printf("maximum num=%d\n",num[n-1]);
    printf("2nd maximum num=%d\n",num[n-2]);
    return 0;
}