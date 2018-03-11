#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    while(n%2==0)
    {
        n/=2;
    }
    printf("%d",n);
    return 0;
}
