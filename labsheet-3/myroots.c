#include <stdio.h>
#include <math.h> // for square root 
int main()
{
    double  a, b, c, x, y;
    printf("what are the values of a b c?: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    x = (-b+sqrt((b*b)-(4*a*c)))/(2*a); //for precedence of operators
    y = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
    
    printf("the roots of the quadratic equation are %lf and %lf\n",x, y);
}