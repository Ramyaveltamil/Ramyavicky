#include <stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    c=a*b;
    for(i = 0; i <= c; i++)
    {
        if (c == i * i)
        {
    printf("yes");
    return 0;
        }
    }
    printf("no");
    return 0;
}
