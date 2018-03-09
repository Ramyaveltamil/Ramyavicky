#include <stdio.h>
int main()
{
    int TSA,l,w,h,vol;
    printf("enter the length,width and height:");
    scanf("%d %d %d",&l,&w,&h);
    TSA = 2*(l + w + h);
    vol=l*w*h;
    printf("%d\n %d",TSA,vol);

    return 0;
}
