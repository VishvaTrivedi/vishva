//copying array elements using ptr
#include<stdio.h>
void main()
{
  int a[]={1,2,3,4,5};
  int b[5];
  int *p,*q;
  q=b;
  p=a;
  for(int i=0;i<5;i++)
  {
     *(q+4-i)=*(p+i);
  }
  printf("The array copied is:\n");
  for(int i=0;i<5;i++)
  {
    printf("%d\n",b[i]);
  }
}