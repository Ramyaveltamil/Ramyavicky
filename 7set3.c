#include<stdio.h>
void main()
{
char str[100];
int w=0,i=0;
printf("Enter a string");
gets(str);
while(str[i]!='\0')
{
if(str[i]=='\n' || str[i]=='\t')
i++;
w++;
}
printf("%d",w);
}
