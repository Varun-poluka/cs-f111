#include <stdio.h>
//calculating simple interest
int main()
{ int p,r,t;
    printf("principle amount ");
    scanf("%d", &p);
    printf("rate of interest ");
    scanf("%d", &r);
    printf("time ");
    scanf("%d", &t);

    float interest = (p*r*t)/100;

    printf("%f\n", interest);
}