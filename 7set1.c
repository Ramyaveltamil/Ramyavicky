#include <stdio.h>
 
int main() 
{
   char string[1000], sub[1000];
   int  length, c = 0;
 
   printf("Input a string\n");
   gets(string);
 
   printf("Enter the length of substring\n");
   scanf("%d",  &length);
 
   while (c < length) {
      sub[c] = string[c];
      c++;
   }
   sub[c] = '\0';
 
   printf("Required substring is \"%s\"\n", sub);
 
   return 0;
}
