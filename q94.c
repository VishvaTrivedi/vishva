#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="SVNITJAVA";
    char* cptr=string;
    int length=strlen(string);
    char revstring[length+1];
    while(*cptr!=0)
    {
        cptr++;
    }
    cptr--;
    for(int i=0;i<length;i++)
    {
        revstring[i]=*cptr;
        cptr--;
    }
    revstring[length]='\0';
printf("%s\n",revstring);
}