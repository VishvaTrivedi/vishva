#include<stdio.h>
void main ()
{
    char statement[100];
    printf("Enter a statement as string:");
    fgets(statement,100,stdin);
    int lengthwspace=0,lengthwospace=0,whitespace=0,words=1;
    char *cptr=statement;
    printf("%s\n",statement);
  while(*cptr!='\0')
  {
    if(*cptr==' ')
    {
        whitespace++;
        words++;
    }
    cptr++;
  }
  lengthwspace=cptr-statement;
  lengthwospace=lengthwspace-whitespace;
  printf("Length of string including and excluding space is %d and %d respectively\n",lengthwspace,lengthwospace);
  printf("Total words are:%d",words);

}