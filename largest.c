#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is largest=%d",a);
    }
    else
    {
        printf("b is largest =%d",b);
    }
    return 0;
}