#include <stdio.h>
int main()
{
    float centimetres, meters;
    printf("Enter measurements in centimetres: ");
    scanf("%f", &centimetres);

    meters = centimetres / 100;

    printf("\nThe measurements in metres %.2f\n\n", meters);
}
