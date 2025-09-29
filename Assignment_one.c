#include <stdio.h>
int main()
{
    float first_num, second_num, third_num, sum, product, average;

    printf("Enter first number: ");
    scanf("%f", &first_num);
    printf("Enter second number: ");
    scanf("%f", &second_num);
    printf("Enter third number: ");
    scanf("%f", &third_num);

    sum = first_num + second_num + third_num;

    product = first_num * second_num * third_num;

    average = sum / 3;
    printf("\nSum of three numbers = %.2f\n", sum);
    printf("\nProduct of three numbers = %.2f\n", product);
    printf("\nAverage of three numbers = %.2f\n", average);
}