// Q19. Write a program to classify a triangle as Equilateral, Isosceles, or Scalene.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilateral triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");

    return 0;
}