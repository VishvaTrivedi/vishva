#include<stdio.h>
void main()
{
    int a[150],i,temp,c;
    a[0]=0;
    a[1]=1;
    for(i=0;i<148;i++)
    {
        a[i+2]=a[i] + a[i+1];

    }
    printf("enter a number");
    scanf("%d",&temp);
    for(i=0;i<150;i++)
    {
        if(temp==a[i])
        {
          printf("entered number is in fibo series");
            break;
        }
    }
}