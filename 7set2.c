#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int len,i=0;
printf("Enter a string");
gets(str);
len=strlen(str);
while(str[i]!='\0')
{
if(str[i]=='0' || str[i]=='1')
i++;
}
if(i==len)
printf("yes");
}
