#iclude<stdio.h>
void swap(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
}
void sort(int a[],int n)
{
int i,j,temo;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[i]>a[j+1])
swap(&a[i],&a[j+1]);
}
}
}
int main()
{
int a[10],n,sum,i;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sacnf("%d",&a[i]);
}
sort(a,n);
n=(n+1)/2-1;
printf("median=%d",a[i]);
return 0;
}
