#include <stdio.h>

//find the area of the circle 
int main()
{
    double r, a;
    printf("what is the radius of the circle: ");
    scanf("%lf", &r);
    a = (3.148*r*r);
    printf("area of the circle is %lf\n", a);
    return 0;
}    
