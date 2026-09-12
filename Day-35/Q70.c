#include<stdio.h>

int main()
{
    int n, i, k;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    k = k % n;

    for(i=0; i<n; i++)
    {
        b[(i+k)%n] = a[i];
    }

    printf("Rotated array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
