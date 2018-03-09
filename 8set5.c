#include<stdio.h>
int main() 
{
    char str[15];
    int a,b;
    printf("Enter a string:");
    scanf("%s",&str);
    a=strlen(str);
    if(a%2!=0)
    {
     b=a/2;
     str[b]='*';
      printf("%s",str);
    }
    else
     {
        b=a/2;
        str[b]='*';
        str[b-1]='*';
         printf("%s",str);
     }
   return 0;
}
