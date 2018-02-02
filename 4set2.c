#include<stdio.h>
void main()
{
char str[100];
int word=0,i=0;
printf("Enter a line");
gets(str);
while(str[i]!='\0')
{
if(str[i]=='\t' || str[i]=='\n' || str[i]==' ')
word++;
i++;
}
printf("words=%d",word);
}
