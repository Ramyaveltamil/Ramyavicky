#include <stdio.h>
int main() 
{
	int a[1000],i,count=0,n,k;
	printf("enter the value of n and k:");
	scanf("%d %d",&n,&k);
	printf("Enter the values:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
     if(a[i]%2!=0)
     {
         count++;
         if(count==k)
         {
         printf("%d",a[i]);
         break;
         }
     }
	}
	return 0;
}
