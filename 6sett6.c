#include<stdio.h>
int main()
{
    char str[50];
    int l,i,s1,s2,s3,t;
    s1=s2=s3=0;
    printf("Enter a string:");
    scanf("%s",&str);
    l = strlen(str);
    for(t=0;t<l;t++){
        i = (int)str[t];
        if(i>=97 && i <= 122) s1 = 1;
        if(i>=48 && i <= 57) s2 = 1;
        if(i>=65 && i <= 90) s1 = 1;
    }
    if(s1+s2 == 2) printf("yes");
    else printf("no"); 
    return 0;
}
