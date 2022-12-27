#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, j, k, n, p;
    printf("Enter the number of array A\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter elements no.%d\n", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number of array B\n");
    scanf("%d", &p);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter elements no.%d\n", i + 1);
        scanf("%d", &b[i]);
    }
    printf("Array A is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nArray B is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    for (i = 0; i < n; i++)
    {

        c[i] = a[i] + b[i];
    }
    printf("\nSum of Array A and B is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}