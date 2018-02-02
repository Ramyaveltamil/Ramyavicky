#include<stdio.h>
void main()
{
char str[100];
int nletter=0,i=0;
printf("Enter a sentence");
gets(str);
while(str[i]!=0)
{
char ch=str[i];
if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
nletter++;
i++;
}
printf("total characters=%d",nletter);
}
