#include<stdio.h>
int main()
{
    int n,i,num,count=0;
    printf("Enter any number\n");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                count++;
        }
            if(count==2)
                printf("prime number\n");
            else
            printf("not prime number\n");
    return 0;
}