#include<stdio.h>
void main()
{
int n,h;
printf("Enter a number");
scanf("%d",&n);
while(n>0)
{
h=n&(-n);
n-=h;
}
printf("%d",2*h);
}

