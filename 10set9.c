#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter the value of a ,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	d=a*b%c;
	printf("%d",d);
}    
