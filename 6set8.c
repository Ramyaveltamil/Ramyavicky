#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
a=a ^ b;
b=b ^ a;
a=a ^ b;
printf("After swapping: %d %d",a,b);
return 0;
}
