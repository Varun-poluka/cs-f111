#include <stdio.h>

int main()
{
    int a=10;
    unsigned long b = 40000;
    float f = 1.23, g;
    double d;

    g = a+f; // a becomes a float 
    d = a+b; // a and b transform into unsigned long and adding gives a unsigned long and then whole becomes double.
    printf(" g value is %f", g);
    printf(" d value is %lf\n", d);
}