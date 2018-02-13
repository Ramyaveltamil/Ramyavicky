#include<stdio.h>
int main()
{
int n,m,c;
printf("Enter two numbers:");
scanf("%d %d",&n,&m);
c=n*m;
if(c%2==0)
printf("Even");
else
printf("odd");
return 0;
}
