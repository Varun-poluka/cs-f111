#include <stdio.h>
//(a+b)^2 formula
int main()
{
    double a, b, sq; // initialising 
    printf("what are the values of a and b: ");
    scanf("%lf%lf", &a, &b);//reading the values 
    sq = (a*a)+(b*b)+(2*a*b); //ecpresion
    printf("(a+b)^2 is %lf\n", sq);
    return 0;
}    
    
