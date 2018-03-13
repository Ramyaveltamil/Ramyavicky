#include<stdio.h>
int main()
{
int a,n,d,i,s=0,t=0;
printf("enter the numbers");
scanf("%d %d %d",&a,&d,&n);
t=a;
for(i=0;i<n;i++)
{
	s=s+t;
	t=t+d;	
}
printf("%d",s);
return 0;
}
