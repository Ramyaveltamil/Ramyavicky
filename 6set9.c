#include<stdio.h>
int main()
{
int n,a[10],i,max;
printf("Enter the number");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
}
