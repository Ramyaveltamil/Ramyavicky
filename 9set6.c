#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
char s[100];
printf("enter the string:");
scanf("%s",s);
for(i=0;i<strlen(s);i++)
{
s[i]=tolower(s[i]);
}
for(i=0;i<strlen(s);i++)
{
if(s[i]==s[i+1])
{
    flag=1;
    break;
}
}
if(flag==1)
printf("no");
else
printf("yes");
return 0;
}
