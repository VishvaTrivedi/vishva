#include<stdio.h>
#include<string.h>

void main ()
{
    char statement[100];
    printf("Enter a statement as string:");
    fgets(statement,100,stdin);
    int vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    int vowelcount=0;
    char *cptr=statement;
    printf("%s\n",statement);
  int length=strlen(statement);
  for(int i=0;i<length;i++)
  {
    if(*cptr!='\0') 
    {
        for(int j=0;j<10;j++)
    {
        if(*cptr==vowels[j])
        {
            vowelcount++;
        }
    }
    cptr++;
    }
  }
  printf("total vowels in string are:%d",vowelcount);

}