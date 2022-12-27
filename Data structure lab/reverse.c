#include<stdio.h>
int main()
{
int a[50],n,i;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the values of an array\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Array is\n");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
printf("\n");
printf("Array in reverse order is \n");
for(i=n-1;i>=0;i--){
    printf("%d\t",a[i]);
}
return 0;
}