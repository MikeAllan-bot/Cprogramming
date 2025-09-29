#include <stdio.h>
int main()
{
    float metres, minutes, hours, kilometres, speed, time;
    printf("Enter the distance travelled(m): ");
    scanf("%f", &metres);
    printf("Enter the time taken(min): ");
    scanf("%f", &minutes);

    kilometres = metres / 1000;
    time = minutes / 60;
    speed = kilometres * time;

    printf("\nThe speed is %.2f\n\n", speed);
}