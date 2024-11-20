#include<stdio.h>
int square(int*);
int square(int* p)
{
    return *p * *p;
}
int cube(int*);
int cube(int*p)
{
    return *p * *p * *p;
}
int main()
{   int num;
    int* p;
    printf("Enter a number:");
    scanf("%d",&num);
    *p=num;
    square(p);
    cube(p);
    printf("Square and Cube of Entered number are %d and %d respectively",square(p),cube(p));
    
}
