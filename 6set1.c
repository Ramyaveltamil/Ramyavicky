#include<stdio.h>
int main()
{
int n,r[10],i=0,c=0;
printf("Enter a number");
scanf("%d",&n);
while(n>0)
{
r[i]=n%10;
n=n/10;
  c++;
  i++;
}
  for(i=c-1;i>=0;i--)
  {
 printf("%d\t",r[i]);
  }
  return 0;
}
  
