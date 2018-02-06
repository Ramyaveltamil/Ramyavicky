#include<stdio.h>
int main()
{
char str[100];
int i=0,count=0;
printf("Enter a string");
gets(str);
while(str[i}!='\0')
{
char ch=str[i];
if(ch>='0' && ch<='9')
count++;
i++;
}
printf("%d",count);
return 0;
}
