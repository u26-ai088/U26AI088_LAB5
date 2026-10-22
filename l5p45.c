#include<stdio.h>
int main()
{
    int a[10],i,j,p=0,q=0,r=0;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            p=p+1;
        }
        else if(a[i]==0)
        {
            q=q+1;
        }
        else
        {
            r=r+1;
        }
    }
    printf("number of negative numbers = %d\n",p);
    printf("number of zeros = %d\n",q);
    printf("number of positive numbers = %d\n",r);
    return 0;
}