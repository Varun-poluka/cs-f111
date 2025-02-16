#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, ans;
    char op;

    printf("enter the first number: ");
    scanf("%f", &a);
    printf("enter the second number: ");
    scanf("%f", &b);
    printf("enter the operator: ");
    scanf(" %c", &op);
    if(op=='+')
    {
        ans = a+b;
        printf("%f %c %f = %f\n", a, op, b, ans);
    }
    else if(op=='/')
    {
        ans = a/b;
        printf("%f %c %f = %f\n", a, op, b, ans);
    }
    else if(op=='^')
    {
        ans = pow(a,b);
        printf("%f %c %f = %f\n", a, op, b, ans);
    }    
    else
    {
        printf("invalid operator\n");
    } 

}