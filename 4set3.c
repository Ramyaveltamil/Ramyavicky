#include<stdio.h>
int main()
{
char str[100];
int space=0,i=0;
printf("Enter a line:");
gets(str);
while(str[i]!='\0')
{
char ch=str[i];
if(ch==' ' || ch== '\t')
space++;
i++;
}
printf("space=%d",space);
return 0;
}
