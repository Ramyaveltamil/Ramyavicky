#include <stdio.h>
int main()
{
    int n,a[10],i,k;
    printf("Enter n and k value:");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    
    }
    printf("%d",a[k-1]);
    return 0;
}    
