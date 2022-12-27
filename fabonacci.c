#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c,f;
    printf("enter any number\n");
    scanf("%d",&n);
    if (a==0)
    {
        printf("%d",a);
    }
    if (f==1)
    {
        printf("%d",f);
    }
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    printf("%d",c);
    }
    return 0;
}