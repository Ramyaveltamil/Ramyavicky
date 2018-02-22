#include<stdio.h>
int main()
{
   int n, a= 0, b = 1, i, c;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( i = 0 ; i< n ; i++ )
   {
      if ( i <= 1 )
         c = i;
      else
      {
         c = a+b;
         a=b;
         b=c;
      }
      printf("%d\n",c);
   }
 
   return 0;
}
