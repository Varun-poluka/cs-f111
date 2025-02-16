#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, n,  answer;

    printf("what are the values of a and b: ");
    scanf("%lf%lf", &a, &b);
    printf("how much do you wanna raise(a+b): ");
    scanf("%lf", &n);
    
    double sum = a+b;
    answer = pow(sum,n); //from the math library 
    printf("%lf\n", answer);
    
}