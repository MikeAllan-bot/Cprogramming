#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter degree celcius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("\n Degree in fahrenheit %.2f\n\n", fahrenheit);
}