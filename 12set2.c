#include <stdio.h>
int main() 
{
	int a[1000],i,n,k;
	printf("Enter the value of n and k:");
	scanf("%d %d",&n,&k);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
if(a[i]==k)
{
printf("yes");
}
	}
	return 0;
}
