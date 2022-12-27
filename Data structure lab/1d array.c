#include<stdio.h>
int main()
{
int a[10],i;
for(i=0;i<10;i++){
    printf("enter elements no.%d",i+1);
    scanf("%d",&a[i]);
}
printf("The elements of array are\n");
for(i=0;i<10;i++){
    printf("%d\n",a[i]);
}
return 0;
}