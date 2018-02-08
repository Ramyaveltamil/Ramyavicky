#include<stdio.h>
void main()
{
char str1[100],str2[100];
int i=0,j=0,flag;
printf("Enter two strings:");
gets(str1);
gets(str2);
for(i=0,j=0;stri[i]!='\0',str2[i]!='\0';i++,j++)
{
if(str1[i]==str2[i])
{
flag=1;
}
}
if(flag==1)
{
printf("%s,str1);
}
while(str1[i]!='\0')
{
i++;
}
while(str2[j]!='\0')
{
j++;
}
if(i>j)
{
printf("%s",str1);
}
else
printf("%s",str2);
}
}
