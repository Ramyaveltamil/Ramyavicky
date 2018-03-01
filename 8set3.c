#include<stdio.h>
int main()
{
int n,a,b;
printf("Enter a number");
scanf("%d",&n);
printf("Enter the range");
scanf("%d %d",&a,&b);
if(n>a && n<b)
printf("yes");
else
printf("no");
}
