#include <stdio.h>

int main()
{
    long int n;
    int count[10] = {0};
    int digit, max = 0, ans = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(int i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            ans = i;
        }
    }

    printf("Most frequent digit = %d", ans);

    return 0;
}
