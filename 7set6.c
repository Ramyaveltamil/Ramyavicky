#include<stdio.h>
int main()
{
int n,k,r=0;
printf("Enter the number");
scanf("%d",&n);
for(k=2;k<n;k++)
{
if(n%k==0)
{
r++;
}
}
if(r==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
