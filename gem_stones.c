#include<stdio.h>
void main()
{
  int n,gem_element=0,gemstone[26],i,j;
  char a=97;
  printf("enter number of stones");
  scanf("%d",&n);
struct stone
{
  char gem[26];
};
struct stone g[n];
for( i=0;i<n;i++)
{
  printf("enter minrals of g[%d]:",i);
  scanf("%s",&g[i].gem[26]);
}
for(j=0;j<26;j++)
{
  for(i=0;i<n;i++)
  {
    if(a+j==g[i].gem[26]);
    {
      gem_element++;
      if(gem_element==25)
      {
        gemstone[i]=a;
      }
    }
  }
}
printf("%c",gemstone[0]);
}
