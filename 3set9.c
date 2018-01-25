#include<stdio.h>
#include<stdlib.h>
int main()
{
int min,hr;
printf("enter the minutes");
scanf("%d",&min);
if(min<60)
{
printf("0 %d",&min);
}
else
{
while(min>=60)
{
hr++;
min=min-60;
}
printf("%d %d",hr,min);
}
return 0;
}




