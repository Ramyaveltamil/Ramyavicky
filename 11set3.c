#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100];
int i,a;
printf("\nEnter the string : ");
scanf("%[^\n]%*s",&str[i]);
a=strlen(str);
for(i=0;i<a;i++)
{
	if(str[i]==' ')
	{
		str[i+1]-=32;
	}
}
str[0]-=32;
printf("%s",str);
return 0;
	
}
