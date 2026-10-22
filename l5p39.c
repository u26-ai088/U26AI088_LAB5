#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n ");
    scanf("%d",&n);
    for(i=65;i<=n;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%3c",i); 
        }
        printf("\n");
    }
    return 0;
}