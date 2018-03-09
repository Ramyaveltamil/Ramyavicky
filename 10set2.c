#include <stdio.h>
int main()
{
   int n,i,a[10],sum=0;
   printf("Enter the limit:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
     sum=sum+a[i];
   }
   printf("sum=%d",sum);
   return 0;
}
