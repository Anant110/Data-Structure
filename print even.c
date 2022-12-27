#include<stdio.h>
int main()
{
    int i=1,n=100;
    printf("even numbers from 1 to 100");
    while(i<=n)
    {
        i++;
        if (i%2==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}