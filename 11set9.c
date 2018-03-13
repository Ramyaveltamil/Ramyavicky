#include<stdio.h>
int main()
{
	int i,a[10],t,j;
	printf("Enter the numbers:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
	for(j=1;j<10;j++)
	{
	    if(a[i]>a[j])
	{
	    t=a[i];
	    a[i]=a[j];
	    a[j]=t;
	}
	}
}
	printf("min=%d",a[0]);
	return 0;
}
