#include<stdio.h>
int main()
{
int n,t;
printf("Enter a number");
scanf("%d",&n);
while(n>=1)
{
t=n%10;
n=n%10;
printf("%d",t);
}
return 0;
}
