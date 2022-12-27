#include <stdio.h>
int main()
{
    int n, i,j, a[50];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf(" repeat element is %d",a[j]);
            }
            else{
                printf("Non repeat element is %d",a[j]);
            }
        }
    }
return 0;
}