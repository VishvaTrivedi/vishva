#include<stdio.h>
int main()
{
    int N;
    printf("Enter number of elements to be sorted:");
    scanf("%d",&N);
    int array[N];
    int* ptr=array;
    for(int i=0;i<N;i++)
    {
        printf("Enter element%d:",i+1);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<N-1;i++)//this loop is to go through all elements of array
    {
        for(int j=0;j<N-i;j++)//this loop is to swap the positions of the elements in the array
        /*(j<n-i) is used as a condition because i is the number of elements sorted. 
         hence we want loop to only work for unsorted elements */
        if(*(ptr+j)>*(ptr+j+1))
        {
            int temp;
            temp=*(ptr+j);
            *(ptr+j)=*(ptr+j+1);
            *(ptr+j+1)=temp;
           
        }
    }
   for(int j=0;j<N;j++)//this loop is to print output
   {
    printf("%d ",array[j]);
}
}