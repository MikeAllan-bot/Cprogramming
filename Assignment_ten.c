#include <stdio.h>
int main()
{
    float age;

    printf("Enter your age: ");
    scanf("%f", &age);

    if (age >= 18)
    {
        printf("You can vote\n");
    }
    else
    {
        printf("You cannot vote\n");
    }
}