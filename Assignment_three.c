#include <stdio.h>
int main()
{
    float width, length, area, perimeter;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    perimeter = length + width;
    area = length * width;

    printf("\nThe area of the rectangle is %.2f \n\n", area);
    printf("\nThe perimeter is %.2f\n\n", perimeter);
}