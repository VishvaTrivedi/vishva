#include<stdio.h>
int main()
{
    int m,n,sum=0,i,j;
    printf("enter number of jars do you have");
    scanf("%d",&n);
    printf("enter number of operation you want to perform");
    scanf("%d",&m);
    int c[n],a[m],b[m],k[m];
    for(i=0;i<m;i++)
    {
        printf("enter k for  %dth op.:",i+1);
        scanf("%d",&k[i]); 
         printf("enter value of a[%d] & b[%d]",i,i);
         scanf("%d %d",&a[i],&b[i]);
    }
    for(i=1;i<=n;i++)
    {
        c[i] = 0;
    }
    for(i=0;i<m;i++)
    {
        for(j=a[i];j<=b[i];j++)
        {
            c[j]+=k[i]; 
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("\n%d",c[i]);
    }
}