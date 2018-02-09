#include<stdio.h>
int main()
{
int n,a[10],min,max,i;
printf("enter a number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("%d %d",min,max);
}
