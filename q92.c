#include<stdio.h>
int main()
{   int N;
    printf("Enter number of elements you want to check:");
    scanf("%d",&N);
    int list[N];
    int max=-32768;
    int* p;
    p=list;
    for(int i=0;i<N;i++)
    {
        printf("enter element%d:",i+1);
        scanf("%d",&list[i]);
    }
    for(int i=0;i<N;i++)
    {
        if(*p>max)
        {
            max= *p;
        }
        p++;
    }
    printf("Maximum number in the given list is %d",max);
}