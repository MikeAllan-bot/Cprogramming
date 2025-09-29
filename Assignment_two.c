#include <stdio.h>
int main()
{
    float radius, area, circumfrence, pi = 3.14;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    printf("\nArea of the circle is %.2f\n", area);
}
