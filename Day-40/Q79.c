#include<stdio.h>

int main()
{
    int r, c, i, j, k;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    for(k=0; k<r+c-1; k++)
    {
        if(k%2==0)
        {
            for(i=r-1; i>=0; i--)
            {
                j = k-i;

                if(j>=0 && j<c)
                    printf("%d ", a[i][j]);
            }
        }
        else
        {
            for(i=0; i<r; i++)
            {
                j = k-i;

                if(j>=0 && j<c)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
