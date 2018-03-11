#include <stdio.h>
int main(void) 
{
int S,N,a=1,i;
printf("enter the value of S:");
scanf("%d",&S);
printf("Enter value of N:");
scanf("%d",&N);
for(i=0;i<N;i++)
a=a*10;
printf("%d",S%a);
return 0;
}
