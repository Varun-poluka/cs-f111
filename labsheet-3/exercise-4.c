#include <stdio.h>

int main()
{
    double a, u, d,t;

    printf("what is the initial velocity: ");
    scanf("%lf", &u);
    printf("what is the acceleration: ");
    scanf("%lf", &a);
    printf("what is the total travel time: ");
    scanf("%lf", &t);

    d = (u*t)+((a*t*t))/2;

    printf("The total distance travelled is %lf\n", d);
}