#include <stdio.h>
int main()
{
    float area, base, hieght;
    printf("Enter Base of the triangle: ");
    scanf("%f", &base);
    printf("Enter Hieght of the triangle: ");
    scanf("%f", &hieght);

    area = 0.5 * base * hieght;

    printf("\nThe area of the triangle is %.2f", area);
}