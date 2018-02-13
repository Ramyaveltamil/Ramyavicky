#include<stdio.h>
void main()
{
char s[100];
  int i=0;
printf("enter a string");
gets(s);
while(s[i]!='\0')
{
char ch=s[i];
if((ch>='A' &&  ch<='Z') || (ch>='a' && ch<='z'))
{
  a++;
  i++;
}
else
printf("no");
}
