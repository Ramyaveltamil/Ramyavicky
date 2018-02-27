#include<stdio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
if (n >0)
{
    n = n + (10 - n % 10);
}
printf("%d",n);
return 0;
}
