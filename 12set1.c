#include<stdio.h>
void main()
{
int num,r,c=0;
printf("Enter the number:");
scanf("%d",&num);
while(num>0)
{
    r=num%10;
    num=num/10;
    c++;
}
printf("count=%d",c);
}
