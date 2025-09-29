
#include <stdio.h>
int main()
{
    float grams, kilograms, package;
    printf("Enter the weight in grams: ");
    scanf("%f", &grams);

    kilograms = grams / 1000;
    package = grams / 10;

    printf("\nThe weight of the package is %.2f kilograms\n\n", kilograms);
    printf("\nIt takes %.2f such packages to form one kilograms\n\n", package);
}
