#include<stdio.h>
int main()
{
int n;
printf("Enter a number");
scanf("%d",&n);
if(n%2==0)
{
printf("number=%d",n);
}
else
{
printf("number=%d",(n-1));
}
return 0;
}
