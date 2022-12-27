#include<stdio.h>
int main()
{
    int sum=0,n,num,r;
    printf("enter a number\n");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
     r=n%10;
     sum=sum+(r*r*r);
     n=n/10;
    }
     if(num==sum)
     {
         printf("number is armstrong");
     }
     else
     {
        printf("not armstrong number");
     }
        return 0;
    }