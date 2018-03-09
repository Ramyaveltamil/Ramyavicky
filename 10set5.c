#include<stdio.h>
#include<math.h>
void main()
{
  float p,t,r,si;
  printf("Enter p t and r value:");
  scanf("%f\t%f\t%f",&p,&t,&r);
  si=(p*t*r)/100;
  printf("Simple interest is %f",floor(si));
}    
    
    
