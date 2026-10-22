#include<stdio.h>
int main()
{
    int a[10],i,j,m=0,n=0;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            m=m+1;
        }
        else 
        {
            n=n+1;
        }
    }
    printf("number of even numbers = %d\n",m);
    printf("number of odd numbers = %d\n",n);
    return 0;
}