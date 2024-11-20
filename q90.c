#include<stdio.h>
void main ()
{
    char statement[]="My name is Manthan";
    int lengthwspace=0,lengthwospace=0,whitespace=0;
    char *cptr=statement;
    printf("%s\n",statement);
  while(*cptr!='\0')
  {
    if(*cptr==' ')
    {
        whitespace++;
    }
    cptr++;
  }
  lengthwspace=cptr-statement;
  lengthwospace=lengthwspace-whitespace;
  printf("Length of string including and excluding space is %d and %d respectively",lengthwspace,lengthwospace);

}