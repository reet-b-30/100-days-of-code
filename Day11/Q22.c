/* Q22: Write a program to 
find profit or loss percentage 
given cost price and selling price.*/

#include <stdio.h>

int main(void)
{
    double costPrice, sellingPrice, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%lf %lf", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice)
    {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %g%%\n", percentage);
    }
    else if (sellingPrice < costPrice)
    {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %g%%\n", percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}
