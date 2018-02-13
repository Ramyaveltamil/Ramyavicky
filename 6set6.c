#include<stdio.h>
void main()
{
char s[100],i=0;
printf("enter a string");
gets(s);
while(s[i]!='/0')
{
char ch=s[i];
if((s[i]>='A' &&  s[i]<='Z') && (s[i]>='0' && s[i]>='9')) || (((s[i]>='a' &&  s[i]<='z') && (s[i]>='0' && s[i]>='9'))
{
printf(yes");
i++;
}
}
else
printf("no");
}
