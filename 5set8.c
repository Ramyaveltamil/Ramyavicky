#include<stdio.h>
int main()
{
int n,i,a[10],avg,sum=0;
printf("enter a number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("%d",avg);
return 0;
}
