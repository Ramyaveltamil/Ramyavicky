#include<stdio.h>
int main()
{
    int n,k,v=1,i;
    printf("Enter the n and k value:");
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
    v=v*n;
    printf("%d",v);
    return 0;
}
