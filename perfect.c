#include<stdio.h>
int main()
{
    int i,sum=0,num;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        if(sum==num)
            printf("this is perfect number\n");
        else
        {
            printf("not perfect number\n");
        }
    }
}
return 0;
}