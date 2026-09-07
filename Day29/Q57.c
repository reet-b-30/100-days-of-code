#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d", sum);

    return 0;
}
