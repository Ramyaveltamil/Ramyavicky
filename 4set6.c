#include<stdio.h>
int main()
{
char str[100];
int i=0,num=0,alp=0,sp=0,spc=0;
printf("Enter a string");
gets(str);
while(str[i]!='\0')
{
char ch=str[i];
if(ch>='0' && ch<='9') 
num++;
else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
alp++;
else if(ch=='\t' && ch==' ')
sp++;
else
spc++;
i++;
}
printf("%d",spc);
return 0;
}
