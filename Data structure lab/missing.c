#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0,missing;
printf("Enter the size of an array\n");
scanf("%d",&n);
int arr[n-1];
for(i=0;i<n-1;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
missing=(n*(n+1))/2-sum;
printf("missing number is %d",missing);
getch();
}
