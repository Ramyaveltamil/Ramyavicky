#include<stdio.h>
int main()
{
	int k,i,sum=0;
	printf("Enterthe value of k:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	sum=sum+i;
	printf("%d",sum);
	return 0;
}
