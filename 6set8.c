#include<stdio.h>
int main()
{
int a.b;
printf("Enter two numbers");
scanf("%d %d",&a,&b);
a= a ^ b;
b= b ^ a;
a= a ^ b;
printf("after swapping:%d %d ",a,b);
return 0;
}
