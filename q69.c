#include <stdio.h>
#include <string.h>
int main()
//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
{
    char arr[100],c;
    printf("Enter the statement/sentence/name.\n");
    fgets(arr,100,stdin);
    printf("Enter character for which you want to find index\n");
    scanf("%c",&c);
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==c){
            printf("Index of %c is %d",c,i+1);
            break;
        }
    }
    return 0;
}