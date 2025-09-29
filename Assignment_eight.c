
#include <stdio.h>
int main()
{
    float metres, kilometres;
    printf("Enter the distance travelled(km): ");
    scanf("%f", &kilometres);

    metres = kilometres * 1000;

    printf("\nThe distance travelled in metres %.2f", metres);
}
