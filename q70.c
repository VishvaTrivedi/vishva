#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    printf("enter number of charcter of array");
    scanf("%d",&n);
    printf("enter those character");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter charcter you want to know for");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        count++;
      else
         count=count;
    }
    printf("number of occurence is %d",count);
    return 0;
}